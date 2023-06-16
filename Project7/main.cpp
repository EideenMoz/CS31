//
//  main.cpp
//  Project7
//
//  Created by Esmail Mozaffari on 3/24/23.
//

#include <stdio.h>
#include <cassert>

#include "AdminAccount.h"

using namespace std;

int main()
{

    BloodDonation doner1(889543, 65, 101.0000);
    BloodDonation doner2(123456, 21, 280.0000);

    VacationAccount accountV1(889543);
    VacationAccount accountV2(123456);
    VacationAccount accountV3(543);

    EmployeeAccount accountE1(accountV1, 0, "Intern");
    EmployeeAccount accountE2(accountV2, 10, "Manager");
    EmployeeAccount accountE3(accountV3);
    EmployeeAccount accountE4;

    AdminAccount accountA1(889);
    AdminAccount accountA2(123);
    AdminAccount accountA3(543);



    // Employee Account 1
    assert(accountE1.getID() == 889543);
    assert(accountE1.getVacationBalance() == 0);
    assert(accountE1.getHoursWorked() == 0);
    assert(accountE1.getTitle() == "Intern");

    assert(accountV1.addVacationToAccount( doner1 ) == true );
    assert(accountE1.syncVacationBalance(accountV1) == true);
    assert(accountE1.getVacationBalance() == 4);
    assert(accountE1.addHoursToAccount(40) == true);
    assert(accountE1.addHoursToAccount(40) == true);
    assert(accountE1.addHoursToAccount(40) == true);
    assert(accountE1.addHoursToAccount(40) == true);
    assert(accountE1.getHoursWorked() == 160);

    assert(accountA1.addBonusVacationHours(accountE1) == true);
    assert(accountE1.getVacationBalance() == 6);

    assert(accountA1.givePromotion(accountE1, "General Manager") == true);
    assert(accountE1.getVacationBalance() == 12);
    assert(accountE1.getTitle() == "General Manager");



    // Employee Account 2
    assert(accountE2.getID() == 123456);
    assert(accountE2.getVacationBalance() == 0);
    assert(accountE2.getHoursWorked() == 10);
    assert(accountE2.getTitle() == "Manager");

    assert(accountV2.addVacationToAccount( doner2 ) == true );
    assert(accountE2.syncVacationBalance(accountV2) == true);
    assert(accountE2.getVacationBalance() == 4);
    assert(accountE2.addHoursToAccount(40) == true);
    assert(accountE2.addHoursToAccount(40) == true);
    assert(accountE2.addHoursToAccount(40) == true);
    assert(accountE2.addHoursToAccount(40) == true);
    assert(accountE2.getHoursWorked() == 170);

    assert(accountA2.addBonusVacationHours(accountE2) == true);
    assert(accountE2.getVacationBalance() == 6);

    assert(accountA2.givePromotion(accountE1, "CEO") == false);
    assert(accountE2.getVacationBalance() == 6);
    assert(accountE2.getTitle() == "Manager");




    // Employee Account 3
    assert(accountE3.getID() == -1);
    assert(accountE3.getVacationBalance() == 0);
    assert(accountE3.getHoursWorked() == 0);
    assert(accountE3.getTitle() == "N/A");

    assert(accountV3.addVacationToAccount( doner1 ) == false );
    assert(accountE3.syncVacationBalance(accountV1) == false);
    assert(accountE3.getVacationBalance() == 0);
    assert(accountE3.addHoursToAccount(40) == false);
    assert(accountE3.getHoursWorked() == 0);

    assert(accountA3.addBonusVacationHours(accountE3) == false);
    assert(accountE3.getVacationBalance() == 0);

    assert(accountA3.givePromotion(accountE3, "CEO") == false);
    assert(accountE3.getVacationBalance() == 0);
    assert(accountE3.getTitle() == "N/A");



    cout << "All test cases passed! " << endl;

    return 0;
}
