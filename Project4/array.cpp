//
//  Project Name: Programming Assignment 4 String Arrays
//  Author: Eideen Mozaffari
//  UID : 105988436
//
//  Created by Esmail Mozaffari on 2/16/23.

//
// scp /Users/esmailmozaffari/Documents/CS31/Project4/Project4/array.cpp classmoz@lnxsrv07.seas.ucla.edu:Desktop



#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

using namespace std;

int locateMaximum(const string array[], int n);

int countFloatingPointValues(const string array[], int n);
bool isValidFloat(string s);

bool hasNoCapitals(const string array[], int n);
bool noCaps(string s);

int shiftLeft(string array[], int n, int amount, string placeholder);

int main()
{
    string data[6] = { "mamaBbcca", "mamaBbcca", "12,", "98.76", "tyrion", "" };
    string data1[6] = { "mamaBbcca", "mamaBbcca", "12,", "98.76", "tyrion", "tyrion" };
    string data2[13] = { "0000076", "00.00.76", "12,", "98.76", " 7600+00", "76.0000", ".", "-70", "79.", "10", ".8", "6", "00008.067"};
    string folks[8] = { "samwell", "jon", "margaery", "daenerys", "tyrion", "sansa", "magdalena", "jon" };
    string name[5]={"Andrew","Bethany","Christie","Danny","Edward"};
    string name1[4] = {"Andrew", "Bethany", "foo", "foo"};
    
    string test_1[4] = { "a", "b", "d", "c"};
    string empty[5] = {};
    

    assert(locateMaximum(data, 6) == 4);
    assert(locateMaximum(data1, 6) == 4);
    assert(locateMaximum(data, 0) == -1);
    assert(locateMaximum(data, -5) == -1);
    assert(locateMaximum(data, 4) == 0);
    assert(locateMaximum(data, 1) == 0);
    assert(locateMaximum(test_1, 1) == 0);
    assert(locateMaximum(folks, 4) == 0);
    assert(locateMaximum(empty, 5) == 0);

    assert(countFloatingPointValues(data2, 8) == 3);
    assert(countFloatingPointValues(data2, 13) == 8);
    assert(countFloatingPointValues(data2, 0) == -1);
    assert(countFloatingPointValues(data2, -5) == -1);
    assert(countFloatingPointValues(empty, 5) == 0);

    assert(hasNoCapitals( data, 6) == false);
    assert(hasNoCapitals( folks, 8 ) == true);
    assert(hasNoCapitals( name1, 4) == false);
    assert(hasNoCapitals( data, 0) == true);
    assert(hasNoCapitals( data, -2) == true);
    
    
    assert (shiftLeft( data, 5, 2, "foo" ) == 2);
    assert (shiftLeft( data1, 6, 4, "foo" ) == 4);
    assert (shiftLeft(name1, 3, 4, "foo") == 3);
    
    assert( shiftLeft(name, 3, 2, "foo") == 2 );
    
    assert( shiftLeft(folks, 8, 0, "foo") == 0 );
    assert( shiftLeft(folks, 0, 5, "foo") == -1 );
    assert( shiftLeft(folks, 0, -1, "foo") == -1 );
    assert( shiftLeft(folks, 8, -2, "foo") == -1 );
    assert( shiftLeft(folks, 8, 12, "foo") == 8 );
    
// Given Asserts
    string a[6] = { ".123", "0456", "789.", "gamma", "beta", "delta" };
    string a1[6] = { ".123", "0456", "789.", "gamma", "beta", "Delta" };
    assert( hasNoCapitals(a, 6) == true );
    assert( hasNoCapitals(a1, 6) == false );
    assert( hasNoCapitals(a1, 5) == true );
    assert( countFloatingPointValues(a, 3) == 3 );
    
    
    cout << "All Test Cases Passed!" << endl;
    
    return 0;
}


int locateMaximum(const string array[], int n)
{
    if (n <= 0)
        return -1;
    
    // If there is only one element in the array, we know the index of the max is the first element,
    // So we can return our function index value here.
    if (n == 1)
        return 0;
    
    // Otherwise, when the size of the array is greater than 1,
    // We set the first element as the default max, and use its value as the first element for our string comparisons as we iterate through the array
    int index_of_max = 0;
    string maximum = array[0];
    
    for (int i = 1; i < n; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
            index_of_max = i;
        }
    }
    
    return index_of_max;
}


int countFloatingPointValues(const string array[], int n )
{
    if (n <= 0)
        return -1;

    int num_floats = 0;
    
    // We call our helper function to check for a valid float as we iterate through each element in the array,
    // If the current element evaluates to true, then we know we have a valid float and can increment the total by 1
    for (size_t i = 0; i < n; i++)
    {
        if ( isValidFloat(array[i]) )
        {
            num_floats += 1;
        }
    }

    return num_floats;
}


bool isValidFloat(string s)
{
    // If the string is empty, then we know it's not a valid float
    if (s.size() == 0)
        return false;
    
    // We set the default boolean return value to true,
    // We also keep track of the number of digits and decimal poinnts found in the string to make sure its a valid float
    bool flag = true;
    int num_decimal_points = 0;
    int num_digits = 0;
    
    // We iterate over the string,
    // If the character is not a digit or a decimal point, we can return false early
    for (size_t i = 0; i < s.size(); i++)
    {
        if ( (!isdigit(s[i])) && (s[i] != '.') )
        {
            flag = false;
            return flag;
        }
        
        else if ( isdigit(s[i]) )
            num_digits += 1;
        
        else if (s[i] == '.')
            num_decimal_points += 1;
    }
    
    // Since we know how many decimal points and how many digits are in the string,
    // We can say that if there are multiple decimal points, the string is not a float,
    // Or if there are no digits in the string, even if there is a decimal point, the string is also not a float
    if ( (num_decimal_points > 1) || (num_digits == 0) )
        flag = false;
    
    return flag;
}


bool hasNoCapitals( const string array[], int n )
{
    if (n <= 0)
        return true;
    
    bool flag = true;
    
    // For each string in our array,
    // If our noCaps helper function evaluates to not true (False), then we have detected an uppercase letter in our current string,
    // And thus the entire array evaluates to false
    for (size_t i = 0; i < n; i++)
    {
        if ( !noCaps(array[i]) )
        {
            flag = false;
            return flag;
        }
    }
    
    return flag;
}

bool noCaps(string s)
{
    bool flag = true;
    
    // Checks each character in the string to determine if there is an uppercase letter (A-Z),
    // Returns false if an uppercase letter is found, since the string does indeed have an uppercase letter,
    // Otherwise, if no uppercase letters are found, our flag never changes from true, and we know our string does not have any uppercase letters
    for (size_t i = 0; i < s.size(); i++)
    {
        if ( isupper(s[i]) )
        {
            flag = false;
            return flag;
        }
    }
    
    return flag;
}


int shiftLeft( string array[ ], int n, int amount, string placeholder )
{
    if ( (n <= 0) || (amount < 0) )
        return -1;
    
    int num_placeholders = 0;
    
    // If the amount is greater than n, our first for loop would run forever because (n - amount) is always negative, and 'i' will always be positive since we are starting our index i at 0
    // So we need an if statement to make sure that n is always greater than or equal to the amount when we run our first two for loops
    if (n >= amount)
    {
        for (size_t i = 0; i < (n - amount); i++)
        {
            array[i] = array[i + amount];
        }
        
        for (size_t j = (n - amount); j < n; j++)
        {
            array[j] = placeholder;
            num_placeholders += 1;
        }
    }
    
    // This is the case where amount is greater than n,
    // We can just replace every element in our array with our placeholder because we know all elements in the initial array will be shifted out of our array.
    else
    {
        for (size_t k = 0; k < n; k++)
        {
            array[k] = placeholder;
            num_placeholders += 1;
        }
    }
        
    
    return num_placeholders;
}

