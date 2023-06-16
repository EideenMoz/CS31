//
//  main.cpp
//  Project3
//
//  Project Name: Quality Control (QC) Testing (Project 3)
//  Author: Eideen Mozaffari
//  UID : 105988436
//
//  Created by Esmail Mozaffari on 2/3/23.
//
// scp /Users/esmailmozaffari/Documents/CS31/Project3/Project3/qctest.cpp classmoz@lnxsrv07.seas.ucla.edu:Desktop

#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

using namespace std;


bool isValidQC(string results);
int passQC(string results);
int defectQC(string results);
int totalQC(string results);
int batches(string results);

int main()
{
    string results;
    
    isValidQC(results);

    assert( isValidQC("") == false );
    assert( isValidQC(" ") == false );
    assert( isValidQC("Q5d2p3 ") == false );
    assert( isValidQC("Q643p789d394") == false );
    assert( isValidQC("Q4i2@3") == false );
    assert( isValidQC("Q006p4q2") == false );
    assert( isValidQC("Q2p01d1") == false );
    assert( isValidQC("Q2p1d01") == false );
    assert( isValidQC("Q500d300p200") == true );
    assert( isValidQC("Q1p0d1Q01d0p1") == false );
    assert( isValidQC("Q1p0d1Q1d0p1P1d0p1") == false );
    assert( isValidQC("Q1p0d1Q1d0p1Q1d0p1") == true );
    assert( isValidQC("Q6p6234") == false );
    assert( isValidQC("Q6p623d") == false );
    assert( isValidQC("Q230p120d110P50d20q30") == false);
    assert( isValidQC("Q230p120d110Q50d20p30") == true);
    assert( isValidQC("Q2p1p1") == false );
    assert( isValidQC("Q2d1d1") == false );
    assert( isValidQC("Q500p200d300Q500d200d300") == false);
    assert( isValidQC("Q100p75d25Q3000p1000q80000") == false);
    assert( isValidQC("Q15d7p8Q16d12p6") == false);
    assert( isValidQC("Q157") == false);
    assert( isValidQC("Q15d77") == false);
    assert( isValidQC("Q15p77") == false);
    assert( isValidQC("Q15d7p8Q16d12p4") == true);
    assert( isValidQC("Q15d7p8Q16d124") == false);
    assert( isValidQC("Q15d7p8Q16d12p4Q10p10") == false);
    assert( isValidQC("Q5p0000d5Q6p0000d6") == false);
    assert( isValidQC("Q1p0d1Q1d0p1Q1d0p1Q10d0p10") == true);
    assert( isValidQC("Q20.p10.d10 ") == false);
    assert( isValidQC("Q20?p10d10") == false);
    assert( isValidQC("Q20 p10d10") == false);
    assert( isValidQC("Q20p10d10Q") == false);
    assert( isValidQC("Q15d7p8Q16d12p4Q20 p10d10") == false);
    assert( isValidQC("Q1p0d1  Q1d0p1Q1d0p1") == false );
    assert( isValidQC("Q10p0abcvd10Q1d0p1Q1d0p1") == false );
    assert( isValidQC("Q1a2p10q2") == false);
    assert( isValidQC("Q12345") == false);
    assert( isValidQC("Q500d300p2a0bc0") == false );
    assert( isValidQC("Q100p25d75Q4000p100d3900") == true);
    assert( isValidQC("Q23p1d2Q10p5d5") == false);
    assert( isValidQC("123p100d23") == false);
    assert( isValidQC("Q10d8p2Q130p110d20") == true);
    assert( isValidQC("Q11p5p5d1") == false);
    
    passQC((results));
    
    assert( passQC("Q500p200d300") == 200 );
    assert( passQC("Q500p200d300Q500p200d300") == 400 );
    assert( passQC("Q500p200d300Q500p200d300Q500p200d300") == 600 );
    assert( passQC("Q500p200f300") == -1 );
    assert( passQC("q500p200d300") == -1 );
    assert( passQC("Q500p200d300Q500p200p300") == -1 );
    assert( passQC("Q500p200d300Q700d200p500") == 700 );
    assert( passQC("Q1p0d1Q1d0p1Q1d0p1Q10d0p10") == 12);
    assert( passQC("Q15d7p8Q160d60p100") == 108);
    
    
    defectQC(results);
    
    assert( defectQC("Q500p200d300") == 300 );
    assert( defectQC("Q500p200d300Q500p200d300") == 600 );
    assert( defectQC("Q500p200d300Q500p200d300Q500p200d300") == 900 );
    assert( defectQC("Q500p200f300") == -1 );
    assert( defectQC("q500p200d300") == -1 );
    assert( defectQC("Q500p200d300Q500p200p300") == -1 );
    assert( defectQC("Q500p200d300Q700d200p500") == 500 );
    assert( defectQC("Q1p0d1Q1d0p1Q1d0p1Q10d0p10") == 1);
    assert( defectQC("Q15d7p8Q160d60p100") == 67);
    

    totalQC(results);
    
    assert( totalQC("Q500p200d300") == 500 );
    assert( totalQC("Q500p200d300Q500p200d300") == 1000 );
    assert( totalQC("Q500p200d300Q500p200d300Q500p200d300") == 1500);
    assert( totalQC("Q500p200f300") == -1 );
    assert( totalQC("q500p200d300") == -1 );
    assert( totalQC("Q500p200d300Q500p200p300") == -1 );
    assert( totalQC("Q500p200d300Q700d200p500") == 1200 );
    assert( totalQC("Q1p0d1Q1d0p1Q1d0p1Q10d0p10") == 13);
    assert( totalQC("Q15d7p8Q160d60p100") == 175);
    
    
    batches(results);
    
    assert( batches("Q500p200d300") == 1 );
    assert( batches("Q500p200d300Q500p200d300") == 2 );
    assert( batches("Q500p200d300Q500p200d300Q500p200d300") == 3);
    assert( batches("Q500p200f300") == -1 );
    assert( batches("q500p200d300") == -1 );
    assert( batches("Q500p200d300Q500p200p300") == -1 );
    assert( batches("Q500p200d300Q700d200p500") == 2);
    assert( batches("Q1p0d1Q1d0p1Q1d0p1Q10d0p10") == 4);
    assert( batches("Q5p2d3Q20p16d4Q5000p300d4700") == 3);
    assert( batches("Q15d7p8Q160d60p100") == 2);
    assert( batches("") == -1);
    assert( batches("Q20.p10.d10 ") == -1);
    assert( batches("Q20?p10d10") == -1);
    assert( batches("Q20 p10d10") == -1);
    assert( batches("Q20p10d10Q") == -1);
    
    
    // Given asserts in handout
    assert( isValidQC("") == false );
    assert( isValidQC(" ") == false );
    assert( passQC( " " ) == -1 );
    assert( defectQC( " " ) == -1 );
    assert( totalQC( " " ) == -1 );
    assert( batches( " " ) == -1 );
    assert( isValidQC( "Q2p1d1" ) == true );
    assert( passQC( "Q2p1d1" ) == 1 );
    assert( defectQC( "Q2p1d1" ) == 1 );
    assert( totalQC( "Q2p1d1" ) == 2 );
    assert( batches( "Q2+1-1" ) == -1 );

    
    cout << "All test cases succeeded" << endl;
    
    
    return(0);
}


bool isValidQC(string results)
{
    // The length of results must be greater than or equal to 6
    if (results.length() < 6)
    {
        return false;
    }
    

    // Keeping track of the length of each batch, so we can start checking at the beginning of the next batch, if there are multiple;
    // Assuming there are multiple batches, we want to increment where our index begins by the length of the batch we just parsed
    int length_eachBatch = 0;
    
    for (size_t l = 0; results.length() > l; l += length_eachBatch)
    {
        
        // The first batch in results must start with a 'Q'
        if (results[l] != 'Q')
        {
            return false;
        }
        
        // The total number of tests cannot be 0
        if (results[(l + 1)] <= '0')
        {
            return false;
        }
        
        
        // Creates a string of the numbers after 'Q' up until 'p' or 'd' is seen in the string, and eventually use stoi to convert it to an integer data type
        // Creates a counter to keep track of how many digits are after 'Q' and before 'p' or 'd' is seen, so we can know which index to begin our next loop at
        string string_totalTests;
        int num_digits_after_Q = 0;
        for (size_t i = (l + 1); (results[i] != 'd') && (results[i] != 'p') && (i < results.length()); i++)
        {
            if (isdigit(results[i]))
            {
                string_totalTests += results[i];
                num_digits_after_Q += 1;
            }
        }
        
        
        // Accounts for out of bounds error, we know that 'Q' (1) plus the number of digits after 'Q' is equal to the length of the string, then this is invalid because there are no other characters in the string
        if ((l + num_digits_after_Q + 1) == results.length())
            return false;
        
        
        // This should be 'p' or 'd' or we have reached the end of the string,
        // We have found how many digits are after the letter 'Q'
        char firstChar = results[l + num_digits_after_Q + 1];
        
        
        // Returns false if the character after the total number of cases is not 'p' or 'd'
        if ((firstChar != 'p') && (firstChar != 'd'))
            return false;

        
        // Convert string of the total tests to an integer
        int num_totalTests = stoi(string_totalTests);

        
        // Returns false if character after 'p' or 'd' is not a digit
        // this is first character after p or d
        if (! isdigit(results[l + 2 + num_digits_after_Q]))
            return false;
        
        
        
        // We start parsing at the character after 'p' or 'd'
        // We continue to parse until 'p' or 'd' is found, or we are the the end of the string
        // We store the string of digits after the first 'p' or 'd'
        // We count the number of digits after the first 'p' or 'd'
        string string_firstCharDigits;
        int num_digits_after_firstChar = 0;
        for (size_t j = (l + 2 + num_digits_after_Q); (results[j] != 'd') && (results[j] != 'p') && (j < results.length()); j++)
        {
            if (isdigit(results[j]))
            {
                string_firstCharDigits += results[j];
                num_digits_after_firstChar += 1;
            }
        }
        
        
        // Accounts for out of bounds error
        if ((l + num_digits_after_Q + num_digits_after_firstChar + 2) == results.length())
            return false;
        
        
        // this should be either 'p' or 'd'
        char secondChar = results[l + num_digits_after_Q + num_digits_after_firstChar + 2];
        
        
        // Returns false if the character after the total number passes or defects is not 'p' or 'd' or is the same character that we have already seen
        if ((secondChar != 'p') && (secondChar != 'd'))
            return false;
      
        if (secondChar == firstChar)
            return false;
            
        
        // Convert the digits after the first charcter to an integer value
        int num_firstCharDigits = stoi(string_firstCharDigits);
        
        
        // Returns false if character after second char is not a digit
        if (! isdigit(results[l + num_digits_after_Q + num_digits_after_firstChar + 3]))
            return false;

        
        // If the digits after the first approved char consist of more than one number, return false if the first digit is 0
        // Takes care of the no leading zeros case
        if ((string_firstCharDigits[0] == '0') && (string_firstCharDigits.length() > 1))
            return false;
        
        
        
        
        
        // We start parsing at the character after the second valid 'p' or 'd' was found
        // We continue to parse until we find a 'Q' or we reach the end of the string
        // We store the string of digits after the second valid 'p' or 'd'
        // We count how many digits are after the second valid 'p' or 'd'
        string string_secondCharDigits;
        int num_digits_after_secondChar = 0;
        for (size_t k = (l + num_digits_after_Q + num_digits_after_firstChar + 3); (results[k] != 'Q')  && (k < results.length()); k++)
        {
            if (isdigit(results[k]))
            {
                string_secondCharDigits += results[k];
                num_digits_after_secondChar += 1;
            }
        }
        
        
        
        // If the digits after the second approved char consist of more than one number, return false
        // Accounts for leading zeros case
        if ((string_secondCharDigits[0] == '0') && (string_secondCharDigits.length() > 1))
            return false;
        
        // Convert the digits after the second character into an integer value
        int num_secondCharDigits = stoi(string_secondCharDigits);

        
        
        
        // Ensure the number of pass and defect test results equals the total number of tests in the QC test string
        if (num_firstCharDigits + num_secondCharDigits != num_totalTests)
            return false;
        
        
        
        //this is the end of the batch
        
        // Update the length of each batch every iteration of the loop
        // Note: Since we are beginning the next iteration of our for loop at the length of a valid first batch, if there is invalid chacters in the substring after our second valid 'p' or 'd' until the end of the batch (ie. Q15p5d1a0Q...), our very first condition within the for loop is to check if the first index is 'Q', and this will not be 'Q' because there are 2 digits (1 and 0) but three charcaters until the next Q. Therefore, results[8], where 8 is the length of the first batch, will be '0', which is not 'Q' so it will be false, as we want it to be.
        length_eachBatch = (num_digits_after_Q + num_digits_after_firstChar + num_digits_after_secondChar + 3);
    
    }
    
    return true;
}


// Returns the total number of passes in a string of results or -1 if an invalid string is passed
int passQC(string results)
{
    if (! isValidQC(results))
    {
        return (-1);
    }

    // Keeping track of the batches so we can use it to increment in our for loop,
    // Assuming there are multiple batches, we want to increment where our index begins by the length of the batch we just parsed
    int length_eachBatch = 0;
    int num_totalPassCases = 0;

    for (size_t l = 0; results.length() > l; l += length_eachBatch)
    {
        
        // We first look for the index of p
        int index_p = 0;
        for (size_t i = (l + 0); results[i] != 'p'; i++)
        {
            index_p += 1;
        }
    
    
        // We make a string of all the digits after p, knowing a valid string is passed in
        // We start at the character after the index of 'p'
        // We continue parsing while there are still digits, and while we have not yet reached the end of the string
        string string_totalPassCases;
        for (size_t k = (l + index_p + 1); isdigit(results[k]) && (k < results.length()); k++)
        {
            string_totalPassCases += results[k];
        }
        
        
        // Create a temporary value for each iteration so we can add it to the total
        // This is very important
        int temp_totalPassCases = stoi(string_totalPassCases);
        num_totalPassCases += temp_totalPassCases;
        
        
        
        // At this point, we just want to find the length of each batch, so we can start at the results[length] if there are multiple batches in the string;
        
        // Algorithm for finding length of each batch:
        
        // From Q until first char
        int counter_1 = 0;
        for (size_t i = (l + 1); (results[i] != 'd') && (results[i] != 'p'); i++)
        {
            if (isdigit(results[i]))
                counter_1 += 1;
        }
        
        // From first char until second char
        int counter_2 = 0;
        for (size_t j = (l + 2 + counter_1); (results[j] != 'd') && (results[j] != 'p'); j++)
        {
            if (isdigit(results[j]))
                counter_2 += 1;
        }
        
        // From second char until end of string
        int counter_3 = 0;
        for (size_t k = (l + counter_1 + counter_2 + 3); (results[k] != 'Q')  && (k < results.length()); k++)
        {
            if (isdigit(results[k]))
                counter_3 += 1;
        }
        
        length_eachBatch = (counter_1 + counter_2 + counter_3 + 3);
    
        
    }

    return num_totalPassCases;
}



// Returns the total number of defects in a string of results or -1 if an invalid string is passed
int defectQC(string results)
{
    if (! isValidQC(results))
    {
        return (-1);
    }
    
    int length_eachBatch = 0;
    int num_totalDefectCases = 0;
    
    for (size_t l = 0; results.length() > l; l = l + length_eachBatch)
    {

        // Find the index of d
        int index_d = 0;
        for (size_t i = (l + 0); results[i] != 'd'; i++)
        {
            index_d += 1;
        }
        
        
        // Make a string of all the digits after d, knowing a valid string is passed in
        // We keep iterating as long as there are digits, and while we have not yet reached the end of the string
        string string_totalDefectCases;
        for (size_t k = (l + index_d + 1); isdigit(results[k]) && (k < results.length()); k++)
        {
            string_totalDefectCases += results[k];
        }
        
        
        // Create a temporary value for each iteration so we can add it to the total
        int temp_totalDefectCases = stoi(string_totalDefectCases);
        num_totalDefectCases += temp_totalDefectCases;
        
        
        
        // At this point, we just want to find the length of each batch, so we can start at the results[length] if there are multiple batches in the string;
        
        // Algorithm for finding length of each batch:
        
        // From Q until first char
        int counter_1 = 0;
        for (size_t i = (l + 1); (results[i] != 'd') && (results[i] != 'p'); i++)
        {
            if (isdigit(results[i]))
                counter_1 += 1;
        }
        
        // From first char until second char
        int counter_2 = 0;
        for (size_t j = (l + 2 + counter_1); (results[j] != 'd') && (results[j] != 'p'); j++)
        {
            if (isdigit(results[j]))
                counter_2 += 1;
        }
        
        // From second char until end of string
        int counter_3 = 0;
        for (size_t k = (l + counter_1 + counter_2 + 3); (results[k] != 'Q')  && (k < results.length()); k++)
        {
            if (isdigit(results[k]))
                counter_3 += 1;
        }
        
        length_eachBatch = (counter_1 + counter_2 + counter_3 + 3);
        
    }
    
    return num_totalDefectCases;
}




 // Returns the total number of tests from all batches in a string of results or -1 if an invalid string is inputted
int totalQC(string results)
{
    if (! isValidQC(results))
    {
        return (-1);
    }
    
    // We can use passQC and defectQC to find the number of pass and defect cases, and then we can sum them to find the total number of tests
    int num_totalTests = 0;
    num_totalTests = passQC(results) + defectQC(results);
    
    
    return num_totalTests;
}


int batches(string results)
{
    
    if (! isValidQC(results))
    {
        return (-1);
    }
    
    // Want to find how many batches
    // We want to see how many time the outter for-loop runs, so we can use our algorithm for finding the length of each batch, and count how many times the loop will run while the length of our string of results is greater than the lengths of all previous batches that have been parsed
    
    int num_batches = 0;
    int length_eachBatch = 0;
    
    for (size_t l = 0; results.length() > l; l = l + length_eachBatch)
    {
        // Algorithm for finding length of each batch:
        
        // From Q until first char
        int counter_1 = 0;
        for (size_t i = (l + 1); (results[i] != 'd') && (results[i] != 'p'); i++)
        {
            if (isdigit(results[i]))
                counter_1 += 1;
        }
        
        // From first char until second char
        int counter_2 = 0;
        for (size_t j = (l + 2 + counter_1); (results[j] != 'd') && (results[j] != 'p'); j++)
        {
            if (isdigit(results[j]))
                counter_2 += 1;
        }
        
        // From second char until end of string
        int counter_3 = 0;
        for (size_t k = (l + counter_1 + counter_2 + 3); (results[k] != 'Q')  && (k < results.length()); k++)
        {
            if (isdigit(results[k]))
                counter_3 += 1;
        }
        
        length_eachBatch = (counter_1 + counter_2 + counter_3 + 3);
        num_batches += 1;
        
    }
    
    return num_batches;
}





