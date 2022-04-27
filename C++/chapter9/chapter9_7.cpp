/*
Julio Cesar Hernandez
CIS 123 701
April 27th 2022

This program determines the number of times a specified character appears in an uppercase string.
*/

#include <iostream> // required for cout
#include <cctype> // required for toupper()
using namespace std;

// function prototypes

int main()
{
    // declare and initialize objects
    char strg1[] = "abbcfgwbibbw";
    char *ptr_strg1 = strg1, ch = 'B';
    int cnt(0);

    // convert string to uppercase
    while(*ptr_strg1)
    { 
        // convert character to uppercase
        *ptr_strg1 = toupper(*ptr_strg1);
        // if current character matches ch increment by one
        if(*ptr_strg1 == ch) cnt++;
        ptr_strg1++;
    }

    cout << "The letter " << ch << " appears "
         << cnt << " times in the string "
         << ptr_strg1 << endl;
    
    // end main function
    return 0;
}

