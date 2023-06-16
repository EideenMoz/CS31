//
//  PlaneFlight.cpp
//  Project5
//
//  Created by Esmail Mozaffari on 3/4/23.
//
// scp /Users/esmailmozaffari/Documents/CS31/Project5Files/PlaneFlight.cpp classmoz@lnxsrv07.seas.ucla.edu:Desktop
//
// Eideen Mozaffari
// UID: 105988436
// Programming Assignment 5 FrequentFlyerAccount


#include "PlaneFlight.h"
#include <string>
#include <iostream>

// constructor
PlaneFlight::PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage)
{
    setCost(cost);
    
    setFromCity(fromCity);
    
    setToCity(toCity);
    
    setName(passengerName);
    
    setMileage(mileage);
}

double PlaneFlight::getCost()
{
    return mCost;
}

void PlaneFlight::setCost(double cost)
{
    if (cost < 0)
    {
        mCost = -1;
    }
    
    else
    {
        mCost = cost;
    }
}

double PlaneFlight::getMileage()
{
    return mMileage;
}

void PlaneFlight::setMileage(double mileage)
{
    if (mileage <= 0)
    {
        mMileage = -1;
    }
    
    else
    {
        mMileage =  mileage;
    }
}

string PlaneFlight::getName()
{
    return mName;
}

void PlaneFlight::setName(string name)
{
    if (name != "")
    {
        mName = name;
    }
}

string PlaneFlight::getFromCity()
{
    return mFromCity;
}

void PlaneFlight::setFromCity(string from)
{
    if ( (from != "") && (from != mToCity) )
    {
        mFromCity = from;
    }
}

string PlaneFlight::getToCity()
{
    return mToCity;
}

void PlaneFlight::setToCity(string to)
{
    if ( (to != "") && (to != mFromCity) )
    {
        mToCity =  to;
    }
}

