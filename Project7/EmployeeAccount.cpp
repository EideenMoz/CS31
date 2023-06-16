//
//  EmployeeAccount.cpp
//  Project7
//
//  Created by Esmail Mozaffari on 3/24/23.
//

#include "EmployeeAccount.h"

EmployeeAccount::EmployeeAccount(VacationAccount account, double HoursWorked, string Title)
{
    
    setID(account);
    
    setVacationBalance(account);
    
    if (HoursWorked >= 0)
    {
        mHoursWorked = HoursWorked;
    }
    else
    {
        mHoursWorked = -1;
    }
    
    if (Title != "")
    {
        mTitle = Title;
    }
    else
    {
        mTitle = "N/A";
    }
    
}
                      
void EmployeeAccount::setID(VacationAccount account)
{
    mEmployeeID = account.mID;
}

int EmployeeAccount::getID()
{
    return mEmployeeID;
}

void EmployeeAccount::setVacationBalance(VacationAccount& account)
{
    mVacationBalance = account.mBalance;
    account.mBalance = 0;
}

double EmployeeAccount::getVacationBalance()
{
    return mVacationBalance;
}

double EmployeeAccount::getHoursWorked()
{
    return mHoursWorked;
}

string EmployeeAccount::getTitle()
{
    return mTitle;
}


bool EmployeeAccount::addHoursToAccount(double hours)
{
    // An employee can only work 40 hours a week, must be a valid employeeID, and must have a title at the company
    if ( (hours > 0) && (hours <= 40) && (mEmployeeID != -1) && (mHoursWorked != -1) && (mTitle != "N/A") )
    {
        mHoursWorked += hours;
        return true;
    }
    
    else
    {
        return false;
    }
    
}

bool EmployeeAccount::syncVacationBalance(VacationAccount& account)
{
    // We want to update the employee's account with their vacation account
    if ( (mEmployeeID == account.mID) && (account.mBalance > 0) )
    {
        mVacationBalance += account.mBalance;
        account.mBalance = 0;
        return true;
    }
    
    else
    {
        return false;
    }
}
