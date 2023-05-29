//
//  main.cpp
//  logic error
//
//  Created by Esmail Mozaffari on 1/12/23.
//

// Code for Project 1

// Electoral College

#include <iostream>

using namespace std;   // pp. 37-38 in Savitch book explain this line

int main() {

int totalVoters;

int republicanVotes, democraticVotes;

cout << "How many Electoral College electors are there? ";

cin >> totalVoters;

cout << "How many of these electors voted for the Republican party candidate? ";

cin >> republicanVotes;

cout << "How many of these electors voted for the Democratic party candidate? ";

cin >> democraticVotes;

double pctRepub = ( 100.0 * republicanVotes ) / democraticVotes;    // introduced a logic error, dividing republicanVotes by democraticVotes instead of totalVoters

double pctDemoc = ( 100.0 * democraticVotes ) / republicanVotes;     // introduced a logic error, dividing democraticVotes by republicanVotes instead of totalVoters

cout.setf(ios::fixed);  // see pp. 30-31 in Savitch book

cout.precision(1);

cout << endl;

cout << pctRepub << "% of the " << republicanVotes << " electors voted for the Republican party candidate." << endl;     cout << pctDemoc << "% of the " << democraticVotes << " electors voted for the Democratic party candidate." << endl;     cout << endl;
    // introduced two logic errors in line 44,
    //      pctRepub of the republicanVotes, rather than totalVoters
    //      pctDemoc of the democraticVotes, rather than totalVoters

if (pctRepub < pctDemoc)    // introduced a logic error, flipped the inequality, output gives the wrong winner

{         cout << "Looks like the Republican party candidate won!" << endl;

}

if (pctDemoc < pctRepub)    // introduced a logic error, flipped the inequality, output gives the wrong winner

{         cout << "Looks like the Democratic party candidate won!" << endl;

}

if (republicanVotes + democraticVotes != totalVoters)

{

          cout << "Looks like some of these data values don't make sense." << endl;

}

return(0); }

