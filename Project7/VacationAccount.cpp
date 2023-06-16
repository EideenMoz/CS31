//
//  VacationAccount.cpp
//  Project7
//
//  Created by Esmail Mozaffari on 3/24/23.
//

#include "VacationAccount.h"

VacationAccount::VacationAccount(int EmployeeID)
{
    setID(EmployeeID);
    
    mBalance = 0;
    
}


double VacationAccount::getBalance()
{
    return mBalance;
}


int VacationAccount::getID()
{
    return mID;
}

void VacationAccount::setID(int ID)
{
    // A valid ID is 6 digits, no leading zeroes
    if (ID >= 100000 && ID <= 999999)
    {
        mID = ID;
    }
    else
    {
        mID = -1;
    }
}

bool VacationAccount::addVacationToAccount(BloodDonation donation)
{
    if ( (donation.getID() == mID) && (donation.getID() != -1) && (donation.getAge() != -1) && (donation.getWeight() != -1) )
    {
        mBalance += 4;
        return true;
    }
    else
    {
        return false;
    }
}

