//
//  main.cpp
//  Project6
//
//  Created by Esmail Mozaffari on 3/18/23.
//
// Eideen Mozaffari
// UID: 105988436
// Programming Assignment 6 Vacation Account Balance
//
// scp /Users/esmailmozaffari/Documents/CS31/Project6Files/main.cpp classmoz@lnxsrv07.seas.ucla.edu:Desktop
//
// cp Desktop/main.cpp .
// cp Desktop/BloodDonation.cpp .
// cp Desktop/BloodDonation.h .
// cp Desktop/VacationAccount.cpp .
// cp Desktop/VacationAccount.h .
// g31 -c BloodDonation.cpp
// g31 -c VacationAccount.cpp
// g31 -c main.cpp
// g31 -o project6 main.o BloodDonation.o VacationAccount.o
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <cassert>

#include "BloodDonation.h"
#include "VacationAccount.h"

using namespace std;

int main()
{
    
    BloodDonation doner1( 752401, 45, 99.56);
    BloodDonation doner2( 889543, 55, 109.50);
    BloodDonation doner3( 89643244, 65, 187.55);
    BloodDonation doner4( 855565, 17, 127.00);

    BloodDonation doner5( 1234.5, -40, 285.00);
    BloodDonation doner6( 12345, 66, 0);
    BloodDonation doner7( 123456., 2.1, 280.00);
    BloodDonation doner8( 123456.000, 27.1, 101.00);
    BloodDonation doner9( 12345, 21, -150.00);
    
    BloodDonation doner10(987654, 65, 101.0000);
    BloodDonation doner11(123456, 21, 280.0000);
    BloodDonation doner12(987654, 66, 101.0000);
    BloodDonation doner13(987654, 64, 100.0000);
    
    


    assert(std::to_string(doner1.getID( )) == "752401");
    assert(std::to_string(doner2.getID( )) == "889543");
    assert(std::to_string(doner3.getID( )) == "-1");
    assert(std::to_string(doner4.getID( )) == "855565");

    assert(std::to_string(doner5.getID( )) == "-1");
    assert(std::to_string(doner6.getID( )) == "-1");
    assert(std::to_string(doner7.getID( )) == "123456");
    assert(std::to_string(doner8.getID( )) == "123456");


    assert(std::to_string(doner2.getAge( )) == "55");

    assert(std::to_string(doner3.getAge( )) == "65");
    assert(std::to_string(doner4.getAge( )) == "-1");
    assert(std::to_string(doner5.getAge( )) == "-1");
    assert(std::to_string(doner6.getAge( )) == "-1");
    assert(std::to_string(doner7.getAge( )) == "-1");
    assert(std::to_string(doner8.getAge( )) == "27");
    assert(std::to_string(doner9.getAge( )) == "21");


    assert(std::to_string(doner3.getWeight( )) == "187.550000" );

    assert(std::to_string(doner1.getWeight( )) == "-1.000000" );
    assert(std::to_string(doner5.getWeight( )) == "-1.000000" );
    assert(std::to_string(doner6.getWeight( )) == "-1.000000" );
    assert(std::to_string(doner7.getWeight( )) == "280.000000" );
    assert(std::to_string(doner8.getWeight( )) == "101.000000" );
    assert(std::to_string(doner9.getWeight( )) == "-1.000000" );
    

    VacationAccount account(889543);
    VacationAccount account2(543);
    VacationAccount account3(123456);
    VacationAccount account4(987654);

    assert( doner1.getID( ) == 752401);
    assert(doner2.getAge( ) ==55);
    assert(doner3.getWeight( ) == 187.550000 );
    
   // account balance starts at zero...
    assert( account.getBalance( ) == 0.000000 );
    assert( account.getID( ) ==  889543);
    
   // Vacation adds to vacation balance
    assert( account.addVacationToAccount( doner2 ) == true );
    assert( account.addVacationToAccount( doner1 ) == false );
    assert( account.addVacationToAccount( doner4 ) == false );
    assert( account.getBalance( ) == 4.000000 );
    assert( account.getID( ) == 889543 );
    
    assert( account2.getBalance() == 0.000000);
    assert( account2.getID() == -1);

    assert(account2.addVacationToAccount(doner2) == false);
    assert(account2.addVacationToAccount(doner1) == false);
    assert(account2.addVacationToAccount(doner3) == false);
    assert(account2.getBalance( ) == 0.000000 );
    assert(account2.getID( ) == -1 );
    
    assert( account3.getBalance( ) == 0.000000 );
    assert( account3.getID( ) ==  123456);
    
    assert( account3.addVacationToAccount( doner11 ) == true );
    assert( account3.addVacationToAccount( doner1 ) == false );
    assert( account3.addVacationToAccount( doner4 ) == false );
    assert( account3.addVacationToAccount( doner11 ) == true );
    assert( account3.getBalance( ) == 8.000000 );
    assert( account3.getID( ) == 123456 );
    
    
    assert( account4.getBalance( ) == 0.000000 );
    assert( account4.getID( ) ==  987654);

    assert( account4.addVacationToAccount( doner10 ) == true );
    assert( account4.addVacationToAccount( doner12 ) == false );
    assert( account4.addVacationToAccount( doner13 ) == false );
    assert( account4.getBalance( ) == 4.000000 );
    assert( account4.getID( ) == 987654 );

    
    
    

    
    
    
    cout << "All test cases passed! " << endl;
    
    return 0;
}
