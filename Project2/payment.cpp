//
//  Project Name: Sales Tax Payment Calculator (Project 2)
//  Author: Eideen Mozaffari
//  UID : 105988436
//
//

#include <iostream>
#include <string>

using namespace std;


int main() {
    
    // First, we want to gather all the inputs
    
    // Prompt user for their state
    string stateName;
    cout << "State Name: ";
    getline(cin, stateName);
    
    // Prompt user for their purchase aamount
    double purchaseAmount = 0.00;
    cout << "Purchase amount: ";
    cin >> purchaseAmount;
    cin.clear();
    cin.ignore(10000, '\n');
    
    // Prompt user for their month
    string month;
    cout << "Provide the month: ";
    getline(cin, month);
    
    // Prompt user for their day
    int day = 0;
    cout << "Provide the day: ";
    cin >> day;
    cin.clear();
    cin.ignore(10000, '\n');
    
    // Prompt user for their year
    int year = 0;
    cout << "Provide the year: ";
    cin >> year;
    
    
    // Defininig and initializing variables that will be used later on in our algorithm to determine the total payment including tax
    double totalPayment = 0.00;
    double stateTaxRate = 0.00;
    double avgLocalTaxRate = 0.00;
    double levy = 0.00;
    
    // All values displayed to console will be displayed to 2 decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    
    
    
    
    // Performing checks to find any invalid inputs
    
    
    // State Validation Check
    if (
        (stateName != "Alabama") && (stateName != "Alaska") && (stateName != "Arizona") && (stateName != "Arkansas") && (stateName != "California") && (stateName != "Colorado") && (stateName != "Connecticut") && (stateName != "Delaware") && (stateName != "Florida") && (stateName != "Georgia") && (stateName != "Hawaii") && (stateName != "Idaho") && (stateName != "Illinois") && (stateName != "Indiana") && (stateName != "Iowa") && (stateName != "Kansas") && (stateName != "Kentucky") && (stateName != "Louisiana") && (stateName != "Maine") && (stateName != "Maryland") && (stateName != "Massachusetts") && (stateName != "Michigan") && (stateName != "Minnesota") && (stateName != "Mississippi") && (stateName != "Missouri") && (stateName != "Montana") && (stateName != "Nebraska") && (stateName != "Nevada") && (stateName != "New Hampshire") && (stateName != "New Jersey") && (stateName != "New Mexico") && (stateName != "New York") && (stateName != "North Carolina") && (stateName != "North Dakota") && (stateName != "Ohio") && (stateName != "Oklahoma") && (stateName != "Oregon") && (stateName != "Pennsylvania") && (stateName != "Rhode Island") && (stateName != "South Carolina") && (stateName != "South Dakota") && (stateName != "Tennessee") && (stateName != "Texas") && (stateName != "Utah") && (stateName != "Vermont") && (stateName != "Virginia") && (stateName != "Washington") && (stateName != "West Virginia") && (stateName != "Wisconsin") && (stateName != "Wyoming")
        )
    {
        cout << "Invalid state!" << endl;
    }
    
    
    // Purchase Amount Validation Check
    else if (purchaseAmount <= 0)
    {
        cout << "Invalid amount!" << endl;
    }
    
    
    // Month Validation Check
    else if (
             (month != "January") && (month != "February") && (month != "March") && (month != "April") && (month != "May") && (month != "June") && (month != "July") && (month != "August") && (month != "September") && (month != "October") && (month != "November") && (month != "December")
             )
    {
        cout << "Invalid month!" << endl;
    }
    
    
    // Day Validation CHeck
    else if ((day < 1) || (day > 31))
    {
        cout << "Invalid day!" << endl;
    }
    
    
    // Year Validation Check
    else if ((year < 1) || (year > 2025))
    {
        cout << "Invalid year!" << endl;
    }
    
    
    
    // If the user inputs passed all validation checks, we can calculate total payment with tax included by state
    // using our variables for state tax rate, local tax rate, and levy
    // If the state has tax free days, we first check if the user's inputs for month and day are elligible
    // for tax exemption
    
    
    // Alabama
    else
    {
        if (stateName == "Alabama")
        {
            if ((month == "July") && (day >= 15) && (day <= 17))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0400;
                avgLocalTaxRate = 0.0514;
                levy = 0;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Alaska
        if (stateName == "Alaska")
        {
            stateTaxRate = 0.00;
            avgLocalTaxRate = 0.0143;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Arizona
        if (stateName == "Arizona")
        {
            stateTaxRate = 0.0560;
            avgLocalTaxRate = 0.0277;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Arkansas
        if (stateName == "Arkansas")
        {
            if ((month == "August") && (day >= 6) && (day <= 7))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0650;
                avgLocalTaxRate = 0.0293;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // California
        if (stateName == "California")
        {
            stateTaxRate = 0.0725;
            avgLocalTaxRate = 0.0131;
            levy = 0.01;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Colorado
        if (stateName == "Colorado")
        {
            stateTaxRate = 0.0290;
            avgLocalTaxRate = 0.0473;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Connecticut
        if (stateName == "Connecticut")
        {
            if ((month == "August") && (day >= 21) && (day <= 27))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0635;
                avgLocalTaxRate = 0.00;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Delaware
        if (stateName == "Delaware")
        {
            stateTaxRate = 0.00;
            avgLocalTaxRate = 0.00;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Florida
        if (stateName == "Florida")
        {
            stateTaxRate = 0.0600;
            avgLocalTaxRate = 0.0105;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Georgia
        if (stateName == "Georgia")
        {
            stateTaxRate = 0.0400;
            avgLocalTaxRate = 0.0329;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Hawaii
        if (stateName == "Hawaii")
        {
            stateTaxRate = 0.0400;
            avgLocalTaxRate = 0.0041;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Idaho
        if (stateName == "Idaho")
        {
            stateTaxRate = 0.0600;
            avgLocalTaxRate = 0.0003;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Illinois
        if (stateName == "Illinois")
        {
            stateTaxRate = 0.0625;
            avgLocalTaxRate = 0.0249;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Indiana
        if (stateName == "Indiana")
        {
            stateTaxRate = 0.0700;
            avgLocalTaxRate = 0.00;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Iowa
        if (stateName == "Iowa")
        {
            if ((month == "August") && (day >= 5) && (day <= 6))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0600;
                avgLocalTaxRate = 0.0082;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Kansas
        if (stateName == "Kansas")
        {
            stateTaxRate = 0.0650;
            avgLocalTaxRate = 0.0217;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Kentucky
        if (stateName == "Kentucky")
        {
            stateTaxRate = 0.0600;
            avgLocalTaxRate = 0.00;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Louisiana
        if (stateName == "Louisiana")
        {
            stateTaxRate = 0.0445;
            avgLocalTaxRate = 0.0500;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Maine
        if (stateName == "Maine")
        {
            stateTaxRate = 0.0550;
            avgLocalTaxRate = 0.00;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Maryland
        if (stateName == "Maryland")
        {
            if ((month == "August") && (day >= 14) && (day <= 20))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0600;
                avgLocalTaxRate = 0.00;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Massachusetts
        if (stateName == "Massachusetts")
        {
            if ((month == "August") && (day >= 14) && (day <= 15))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0625;
                avgLocalTaxRate = 0.00;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Michigan
        if (stateName == "Michigan")
        {
            stateTaxRate = 0.0600;
            avgLocalTaxRate = 0.00;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Minnesota
        if (stateName == "Minnesota")
        {
            stateTaxRate = 0.0688;
            avgLocalTaxRate = 0.0055;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Mississippi
        if (stateName == "Mississippi")
        {
            if ((month == "July") && (day >= 29) && (day <= 30))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0700;
                avgLocalTaxRate = 0.00070;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Missouri
        if (stateName == "Missouri")
        {
            if ((month == "April") && (day >= 19) && (day <= 25))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0423;
                avgLocalTaxRate = 0.0390;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Montana
        if (stateName == "Montana")
        {
            stateTaxRate = 0.00;
            avgLocalTaxRate = 0.00;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Nebraska
        if (stateName == "Nebraska")
        {
            stateTaxRate = 0.0550;
            avgLocalTaxRate = 0.0135;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Nevada
        if (stateName == "Nevada")
        {
            if ((month == "August") && (day >= 5) && (day <= 7))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0685;
                avgLocalTaxRate = 0.0129;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // New Hampshire
        if (stateName == "New Hampshire")
        {
            stateTaxRate = 0.00;
            avgLocalTaxRate = 0.00;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // New Jersey
        if (stateName == "New Jersey")
        {
            stateTaxRate = 0.0663;
            avgLocalTaxRate = -0.0003;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // New Mexico
        if (stateName == "New Mexico")
        {
            stateTaxRate = 0.0513;
            avgLocalTaxRate = 0.0269;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // New York
        if (stateName == "New York")
        {
            stateTaxRate = 0.0400;
            avgLocalTaxRate = 0.0449;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // North Carolina
        if (stateName == "North Carolina")
        {
            stateTaxRate = 0.0475;
            avgLocalTaxRate = 0.0222;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // North Dakota
        if (stateName == "North Dakota")
        {
            stateTaxRate = 0.0500;
            avgLocalTaxRate = 0.0185;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Ohio
        if (stateName == "Ohio")
        {
            if ((month == "August") && (day >= 5) && (day <= 7))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0575;
                avgLocalTaxRate = 0.0142;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Oklahoma
        if (stateName == "Oklahoma")
        {
            if ((month == "August") && (day >= 6) && (day <= 8))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0450;
                avgLocalTaxRate = 0.0442;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Oregon
        if (stateName == "Oregon")
        {
            stateTaxRate = 0.00;
            avgLocalTaxRate = 0.00;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Pennsylvania
        if (stateName == "Pennsylvania")
        {
            stateTaxRate = 0.0600;
            avgLocalTaxRate = 0.0034;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Rhode Island
        if (stateName == "Rhode Island")
        {
            stateTaxRate = 0.0700;
            avgLocalTaxRate = 0.00;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // South Carolina
        if (stateName == "South Carolina")
        {
            if ((month == "August") && (day >= 5) && (day <= 7))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0600;
                avgLocalTaxRate = 0.0143;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // South Dakota
        if (stateName == "South Dakota")
        {
            stateTaxRate = 0.0450;
            avgLocalTaxRate = 0.0190;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        
        // Tennessee
        if (stateName == "Tennessee")
        {
            if ((month == "July") && (day >= 29) && (day <= 31))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0700;
                avgLocalTaxRate = 0.0247;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Texas
        if (stateName == "Texas")
        {
            if ((month == "August") && (day >= 5) && (day <= 7))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0625;
                avgLocalTaxRate = 0.0194;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Utah
        if (stateName == "Utah")
        {
            stateTaxRate = 0.0595;
            avgLocalTaxRate = 0.0099;
            levy = 0.0125;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // Vermont
        if (stateName == "Vermont")
        {
            stateTaxRate = 0.0600;
            avgLocalTaxRate = 0.0018;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        
        // Virginia
        if (stateName == "Virginia")
        {
            stateTaxRate = 0.0530;
            avgLocalTaxRate = 0.0035;
            levy = 0.0100;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        
        // Washington
        if (stateName == "Washington")
        {
            stateTaxRate = 0.0650;
            avgLocalTaxRate = 0.0267;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        // West Virginia
        if (stateName == "West Virginia")
        {
            if ((month == "August") && (day >= 5) && (day <= 7))
            {
                cout << "Please pay a total of $" << purchaseAmount << endl;
            }
            else
            {
                stateTaxRate = 0.0600;
                avgLocalTaxRate = 0.0039;
                levy = 0.00;
                totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
                cout << "Please pay a total of $" << totalPayment << endl;
            }
        }
        
        // Wisconsin
        if (stateName == "Wisconsin")
        {
            stateTaxRate = 0.0500;
            avgLocalTaxRate = 0.0044;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
        
        // Wyoming
        if (stateName == "Wyoming")
        {
            stateTaxRate = 0.0400;
            avgLocalTaxRate = 0.0136;
            levy = 0.00;
            totalPayment = (purchaseAmount) * (1 + stateTaxRate + avgLocalTaxRate + levy);
            cout << "Please pay a total of $" << totalPayment << endl;
        }
        
    }

    return(0);
}
