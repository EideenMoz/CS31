//
//  BloodDonation.cpp
//  Project6
//
//  Created by Esmail Mozaffari on 3/18/23.
//
// Eideen Mozaffari
// UID: 105988436
// Programming Assignment 6 Vacation Account Balance
//
// scp /Users/esmailmozaffari/Documents/CS31/Project6Files/BloodDonation.cpp classmoz@lnxsrv07.seas.ucla.edu:Desktop

#include "BloodDonation.h"
#include <string>
#include <iostream>

BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight)
{
    setID(EmployeeID);
    
    setAge(EmployeeAge);
    
    setWeight(EmployeeWeight);
    
}


int BloodDonation::getID()
{
    return mID;
}

void BloodDonation::setID(int ID)
{
    // A valid ID is 6 digits, no leading zeroes
    if ( (ID >= 100000) && (ID <= 999999) )
    {
        mID = ID;
    }
    else
    {
        mID = -1;
    }
}


int BloodDonation::getAge()
{
    return mAge;
}

void BloodDonation::setAge(int age)
{
    if ( (age >= 21) && (age <= 65) )
    {
        mAge = age;
    }
    
    else
    {
        mAge = -1;
    }
}


double BloodDonation::getWeight()
{
    return mWeight;
}

void BloodDonation::setWeight(double weight)
{
    if ( (weight >= 101.00) && (weight <= 280.00) )
    {
        mWeight = weight;
    }
    else
    {
        mWeight = -1;
    }
        
}


