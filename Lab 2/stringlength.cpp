#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[30];
    int i, count = 0;
    cout << "Enter a string: ";
    cin.get(a, 30);
    for (i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    cout << "\nLength of the string " << a << "is " << count;
    return 0;
}