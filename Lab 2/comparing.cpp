#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str1[10], str2[10];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1 == str2)
    {
        cout << "Strings are equal";
    }
    else
        cout
            << "Strings are not equal";
}