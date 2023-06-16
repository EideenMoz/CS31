//
//  PlaneFlight.hpp
//  Project5
//
//  Created by Esmail Mozaffari on 3/4/23.
//
// scp /Users/esmailmozaffari/Documents/CS31/Project5Files/PlaneFlight.h classmoz@lnxsrv07.seas.ucla.edu:Desktop
//
// Eideen Mozaffari
// UID: 105988436
// Programming Assignment 5 FrequentFlyerAccount

#ifndef PlaneFlight_H
#define PlaneFlight_H

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


class PlaneFlight
{
private:
    double mCost;
    string mFromCity;
    string mToCity;
    string mName;
    double mMileage;
    
public:
    // constructor
    PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage);
    
    double getCost();
    void setCost(double cost);
    
    double getMileage();
    void setMileage(double mileage);
    
    string getName();
    void setName(string name);
    
    string getFromCity();
    void setFromCity(string from);
    
    string getToCity();
    void setToCity(string to);
    
};


#endif /* PlaneFlight_H */
