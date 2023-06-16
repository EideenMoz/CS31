//
//  main.cpp
//  Project5
//
//  Created by Esmail Mozaffari on 3/5/23.
//
// scp /Users/esmailmozaffari/Documents/CS31/Project5Files/main.cpp classmoz@lnxsrv07.seas.ucla.edu:Desktop
// cp Desktop/main.cpp .
// cp Desktop/PlaneFlight.cpp .
// cp Desktop/PlaneFlight.h .
// cp Desktop/FrequentFlyerAccount.cpp .
// cp Desktop/FrequentFlyerAccount.h .
// g31 -c PlaneFlight.cpp
// g31 -c FrequentFlyerAccount.cpp
// g31 -c main.cpp
// g31 -o project5 main.o PlaneFlight.o FrequentFlyerAccount.o
//
// Eideen Mozaffari
// UID: 105988436
// Programming Assignment 5 FrequentFlyerAccount


#include <stdio.h>
#include <iostream>
#include <string>
#include <cassert>

#include "PlaneFlight.h"
#include "FrequentFlyerAccount.h"


using namespace std;

int main()
{
    // sample test code
     PlaneFlight shortleg( "Howard", "LAX", "LAS", 49.00, 285 );
     PlaneFlight longleg( "Howard", "LAS", "NYC", 399.00, 2800 );
     PlaneFlight sample( "Sample", "LAX", "LAS", 0, 1 );
     FrequentFlyerAccount account( "Howard" );
    
     assert( shortleg.getFromCity( ) == "LAX" );
     assert( shortleg.getToCity( ) == "LAS" );
     assert( shortleg.getName( ) == "Howard" );
     assert( std::to_string( shortleg.getCost( ) ) == "49.000000" );
     assert( std::to_string( shortleg.getMileage( ) ) == "285.000000" );
    assert( std::to_string(sample.getCost() ) == "0.000000");
    
     // account balance starts at zero...
     assert( std::to_string( account.getBalance( ) ) == "0.000000" );
     assert( account.getName( ) == "Howard" );
     assert( account.canEarnFreeFlight( 3300.00 ) == false );
    
     // flights add to an account balance
     assert( account.addFlightToAccount( shortleg ) == true ); // returns true because the names match
     assert( account.addFlightToAccount( longleg ) == true ); // returns true because the names match
     assert( std::to_string( account.getBalance( ) ) == "3085.000000" );
    
     // free flights reduce an account balance
     if (account.canEarnFreeFlight( 285 ))
     {
     assert( account.freeFlight( "LAS", "LAX", 285, sample ) == true );
         
     // Howard earned a free flight...
     assert( sample.getName( ) == "Howard" );
     assert( std::to_string( sample.getCost( ) ) == "0.000000" );
     assert( sample.getFromCity( ) == "LAS" );
     assert( sample.getToCity( ) == "LAX" );
     assert( std::to_string( sample.getMileage( ) ) == "285.000000" );
         
     // account has been reduced for this free flight...
     assert( std::to_string( account.getBalance( ) ) == "2800.000000" );
         
     }
    
     else
     {
     assert( false ); // there are enough miles in the account...
     }
    
     // non-matching names are ignored
     PlaneFlight muffin( "Muffin", "LAX", "Doggie Heaven", 500, 500 );
     assert( account.addFlightToAccount( muffin ) == false );
     assert( std::to_string( account.getBalance( ) ) == "2800.000000" );
    
    PlaneFlight BadData("", "78@$", "78@$", -3, 0);
    assert( BadData.getFromCity( ) == "78@$" );
    assert( BadData.getToCity( ) == "" );
    assert( BadData.getName( ) == "" );
    assert( std::to_string( BadData.getCost( ) ) == "-1.000000" );
    assert( std::to_string( BadData.getMileage( ) ) == "-1.000000" );
    
    FrequentFlyerAccount BadDataAccount("Bad");
    assert( std::to_string( BadDataAccount.getBalance( ) ) == "0.000000" );
    assert( BadDataAccount.getName( ) == "Bad" );
    assert( BadDataAccount.canEarnFreeFlight( -10 ) == false );
    assert( account.addFlightToAccount( BadData ) == false ); // returns true because the names match
    assert( std::to_string( BadDataAccount.getBalance( ) ) == "0.000000" );
    
    FrequentFlyerAccount Muffine("Muffin");
    assert( Muffine.freeFlight( "LAS", "LAX", 0, sample ) == false );
    assert( Muffine.addFlightToAccount( muffin ) == true );
    assert( Muffine.freeFlight( "LAS", "LAX", 100, BadData ) == true );
    assert( std::to_string( Muffine.getBalance( ) ) == "400.000000" );
    
    PlaneFlight EdgeCase("Edge", "LAX", "LAS", 100, 100);
    assert( EdgeCase.getFromCity( ) == "LAX" );
    assert( EdgeCase.getToCity( ) == "LAS" );
    assert( EdgeCase.getName( ) == "Edge" );
    assert( std::to_string( EdgeCase.getCost( ) ) == "100.000000" );
    assert( std::to_string( EdgeCase.getMileage( ) ) == "100.000000" );
    
    FrequentFlyerAccount EdgeCase1("Edge");
    assert( std::to_string( EdgeCase1.getBalance( ) ) == "0.000000" );
    assert( EdgeCase1.addFlightToAccount( EdgeCase ) == true );
    assert( std::to_string( EdgeCase1.getBalance( ) ) == "100.000000" );
    assert( EdgeCase1.getName( ) == "Edge" );
    assert( EdgeCase1.canEarnFreeFlight( 100 ) == true );
    assert( EdgeCase1.freeFlight( "LAX", "LAX", 100, EdgeCase ) == false );
    assert( EdgeCase1.freeFlight( "LAS", "LAX", 100, EdgeCase ) == true );
    assert( EdgeCase1.freeFlight( "LAS", "LAX", 100, EdgeCase ) == false );
    
    assert( EdgeCase.getName( ) == "Edge" );
    assert( std::to_string( EdgeCase.getCost( ) ) == "0.000000" );
    assert( EdgeCase.getFromCity( ) == "LAS" );
    assert( EdgeCase.getToCity( ) == "LAX" );
    assert( std::to_string( EdgeCase.getMileage( ) ) == "100.000000" );
    
    assert( std::to_string( EdgeCase1.getBalance( ) ) == "0.000000" );
    
    
    
    
    cout << "All Test Cases Passed!" << endl;
    return (0);
}
