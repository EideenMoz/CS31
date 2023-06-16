//
//  AdminAccount.hpp
//  Project7
//
//  Created by Esmail Mozaffari on 3/24/23.
//

#ifndef AdminAccount_H
#define AdminAccount_H

#include <stdio.h>
#include "EmployeeAccount.h"

class AdminAccount
{
    private:
        int mAdminID;
        
    public:
        AdminAccount(int AdminID);
        AdminAccount() : mAdminID{-1}
        {
        };
    
        void setID(int ID);
        int getID();
    
        bool addBonusVacationHours(EmployeeAccount& account);
        bool givePromotion(EmployeeAccount& account, string NewTitle);
};

#endif /* AdminAccount_H */
