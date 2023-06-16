//
//  BloodDonation.hpp
//  Project7
//
//  Created by Esmail Mozaffari on 3/24/23.
//

#ifndef BloodDonation_H
#define BloodDonation_H

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class AdminAccount;
class EmployeeAccount;

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
