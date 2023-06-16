//
//  VacationAccount.hpp
//  Project6
//
//  Created by Esmail Mozaffari on 3/18/23.
//
// Eideen Mozaffari
// UID: 105988436
// Programming Assignment 6 Vacation Account Balance
//
// scp /Users/esmailmozaffari/Documents/CS31/Project6Files/VacationAccount.h classmoz@lnxsrv07.seas.ucla.edu:Desktop

#ifndef VacationAccount_H
#define VacationAccount_H

#include <stdio.h>
#include <iostream>
#include <string>

#include "BloodDonation.h"

using namespace std;

class VacationAccount
{
    private:
        int mID;
        double mBalance;
    
    public:
        // Constructor
        VacationAccount(int EmployeeID);
        
        double getBalance();
    
        int getID();
        void setID(int ID);
        
        bool addVacationToAccount(BloodDonation donation);
    };



#endif /* VacationAccount_H */
