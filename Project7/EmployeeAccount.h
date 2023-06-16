//
//  EmployeeAccount.hpp
//  Project7
//
//  Created by Esmail Mozaffari on 3/24/23.
//

#ifndef EmployeeAccount_H
#define EmployeeAccount_H

#include <stdio.h>
#include "VacationAccount.h"

class EmployeeAccount
{
    private:
        int mEmployeeID;
        double mVacationBalance;
        double mHoursWorked;
        string mTitle;
        
    public:
        EmployeeAccount(VacationAccount account, double HoursWorked, string Title);
    
        EmployeeAccount(VacationAccount account) : EmployeeAccount{account, 0, ""}
        {
        };
    
        EmployeeAccount() : mEmployeeID{-1}, mVacationBalance{0}, mHoursWorked{0}, mTitle{"N/A"}
        {
        };
        
        void setID(VacationAccount account);
        int getID();
    
        void setVacationBalance(VacationAccount& account);
        double getVacationBalance();
    
        double getHoursWorked();
        string getTitle();
    
        friend AdminAccount;
    
        bool addHoursToAccount(double hours);
        bool syncVacationBalance(VacationAccount& account);
};


#endif /* EmployeeAccount_hpp */
