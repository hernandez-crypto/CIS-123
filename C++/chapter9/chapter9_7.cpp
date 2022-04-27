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
void stringupper(char*&);
int countchar(char*&, char);

int main()
{
    // declare and initialize objects
    char strg1[] = "abbcfgwbibbw";
    char *ptr_strg1 = strg1, ch = 'B';

    // convert string to uppercase
    stringupper(ptr_strg1);


    cout << "The letter " << ch << " appears "
         << countchar(ptr_strg1, ch) << " times in the string "
         << ptr_strg1 << endl;
    
    // end main function
    return 0;
}

// this function counts the number of times the character ch appears in the string pointed to by the ptr_strg
int countchar(char* &ptr_strg, char ch)
{
    // declare and initialize objects
    int cnt(0);

    cout << *ptr_strg << endl;
    // while not end of string
    while(*ptr_strg)
    {
        // look for ch and increment cnt
        if(*ptr_strg == ch) cnt++;

        // move pointer to next character
        ptr_strg++;
    }

    return cnt;
}

// this function converts each character in the string pointed to by ptr_strg to uppercase
void stringupper(char* &ptr_strg)
{
    // while not end of string
    while(*ptr_strg)
    {
        // convert character to uppercase
        *ptr_strg = toupper(*ptr_strg);
        ptr_strg++;
    }
}