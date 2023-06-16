//
//  BloodDonation.hpp
//  Project6
//
//  Created by Esmail Mozaffari on 3/18/23.
//
// Eideen Mozaffari
// UID: 105988436
// Programming Assignment 6 Vacation Account Balance
//
// scp /Users/esmailmozaffari/Documents/CS31/Project6Files/BloodDonation.h classmoz@lnxsrv07.seas.ucla.edu:Desktop

#ifndef BloodDonation_H
#define BloodDonation_H

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class BloodDonation
{
    private:
        int mID;
        int mAge;
        double mWeight;
    
    public:
        // constructor
        BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight);
        
        int getID();
        void setID(int ID);
        
        int getAge();
        void setAge(int age);
        
        double getWeight();
        void setWeight(double weight);
    
};


#endif /* BloodDonation_H */
