//
//  AdminAccount.cpp
//  Project7
//
//  Created by Esmail Mozaffari on 3/24/23.
//

#include "AdminAccount.h"

AdminAccount::AdminAccount(int AdminID)
{
    setID(AdminID);
}

void AdminAccount::setID(int ID)
{
    // A valid ID is 3 digits, no leading zeroes
    if ( (ID >= 100) && (ID <= 999) )
    {
        mAdminID = ID;
    }
    else
    {
        mAdminID = -1;
    }
}

int AdminAccount::getID()
{
    return mAdminID;
}

bool AdminAccount::addBonusVacationHours(EmployeeAccount& account)
{
    // For every 80 hours worked, the employee gets two additional vacation hours
    // The Admin will have an ID that corresponds with the first three digits of the employeeID
    if ( ((account.mEmployeeID / 1000) == mAdminID) && (account.mHoursWorked >= 80) && (account.mTitle != "N/A") )
    {
        account.mVacationBalance += 2;
        return true;
    }
    else
    {
        return false;
    }
}

bool AdminAccount::givePromotion(EmployeeAccount& account, string NewTitle)
{
    // An Admin can promote an employee, updating their job title and giving 6 extra vacation hours
    // As long as they have worked over 160 hours
    if ( ((account.mEmployeeID / 1000) == mAdminID) && (account.mHoursWorked >= 160) && (account.mTitle != "N/A") )
    {
        account.mTitle = NewTitle;
        account.mVacationBalance += 6;
        return true;
    }
    
    else
    {
        return false;
    }
}
