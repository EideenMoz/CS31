//
//  VacationAccount.hpp
//  Project7
//
//  Created by Esmail Mozaffari on 3/24/23.
//

#ifndef VacationAccount_H
#define VacationAccount_H

#include <stdio.h>
#include "BloodDonation.h"

class VacationAccount
{
    private:
        int mID;
        double mBalance;
    
    public:
        // Constructor
        VacationAccount(int EmployeeID);
    
        friend EmployeeAccount;
        
        double getBalance();
    
        int getID();
        void setID(int ID);
        
        bool addVacationToAccount(BloodDonation donation);
    };



#endif /* VacationAccount_H */
