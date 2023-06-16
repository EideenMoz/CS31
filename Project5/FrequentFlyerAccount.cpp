//
//  FrequentFlyerAccount.cpp
//  Project5
//
//  Created by Esmail Mozaffari on 3/4/23.
//
// scp /Users/esmailmozaffari/Documents/CS31/Project5Files/FrequentFlyerAccount.cpp classmoz@lnxsrv07.seas.ucla.edu:Desktop
//
// Eideen Mozaffari
// UID: 105988436
// Programming Assignment 5 FrequentFlyerAccount


#include "FrequentFlyerAccount.h"
#include <iostream>
#include <string>


FrequentFlyerAccount::FrequentFlyerAccount(string name)
{
    mName = name;
    mBalance = 0;
}

double FrequentFlyerAccount::getBalance()
{
    return mBalance;
}

string FrequentFlyerAccount::getName()
{
    return mName;
}

bool FrequentFlyerAccount::addFlightToAccount(PlaneFlight flight)
{
    if ( (mName == flight.getName()) && (flight.getCost() > 0) && (flight.getFromCity() != flight.getToCity()) && (flight.getToCity() != "") && (flight.getFromCity() != "") && (flight.getMileage() > 0) )
    {
        mBalance += flight.getMileage();
        return true;
    }
    
    else
    {
        return false;
    }
    
}


//
bool FrequentFlyerAccount::freeFlight(string from, string to, double mileage, PlaneFlight &flight)
{
    if ( (mBalance >= mileage) && (from != to) && (from != "") && (to != "") && (mileage > 0) )
    {
        mBalance = mBalance - mileage;
        
        // Account for the edge case when the freeflight's "to" and "from" parameters are the same as the intial flight's "from" and "to"
        flight.setToCity("reset_to");
        flight.setFromCity("reset_from");
        // Ex. flight.getTo() = "HI" and from = "HI"
        
        flight.setName(mName);
        flight.setFromCity(from);
        flight.setToCity(to);
        flight.setCost(0);
        flight.setMileage(mileage);
        
        return true;
    }
    else
    {
        return false;
    }
}

bool FrequentFlyerAccount::canEarnFreeFlight(double mileage)
{
    if ( (mileage > 0) && (mBalance >= mileage) )
    {
        return true;
    }
    else
    {
        return false;
    }
}

