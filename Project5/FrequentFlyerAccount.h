//
//  FrequentFlyerAccount.hpp
//  Project5
//
//  Created by Esmail Mozaffari on 3/4/23.
//
//scp /Users/esmailmozaffari/Documents/CS31/Project5Files/FrequentFlyerAccount.h classmoz@lnxsrv07.seas.ucla.edu:Desktop
//
// Eideen Mozaffari
// UID: 105988436
// Programming Assignment 5 FrequentFlyerAccount

#ifndef FrequentFlyerAccount_H
#define FrequentFlyerAccount_H

#include <stdio.h>
#include <iostream>
#include <string>

#include "PlaneFlight.h"


using namespace std;

class FrequentFlyerAccount
{
private:
    string mName;
    double mBalance;
    
public:
    // Constructor
    FrequentFlyerAccount(string name);
    
    
    double getBalance();
    string getName();
    
    bool addFlightToAccount(PlaneFlight flight);
    bool canEarnFreeFlight(double mileage);
    bool freeFlight(string from, string to, double mileage, PlaneFlight& flight);
    
    
};



#endif /* FrequentFlyerAccount_H */
