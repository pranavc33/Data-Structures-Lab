#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[50], b[50];
    cout << "Enter the main string:" << endl;
    gets(a);
    cout << "Enter the sub string:" << endl;
    gets(b);
    int n, len_a, len_b;
    cout << "Enter the location to enter the sub string:";
    cin >> n;
    len_a = strlen(a);
    len_b = strlen(b);
    for (int i = 1; i <= (len_a - n); i++)
    {
        a[len_a + len_b - i] = a[len_a - i];
    }
    a[len_a + len_b] = '\0';

    for (int j = 0; j < len_a; j++)
    {
        a[n + j] = b[j];
    }
    cout << a;
}