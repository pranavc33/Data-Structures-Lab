// #include <iostream>
// #include <string.h>
// #include <math.h>

// using namespace std;
// int main()
// {
//     char str1[100];
//     char str2[100];
//     char str2[100];
//     int p, pos;
//     int total;
//     int len1, len2, i = 0, t = 0;
//     int c, a, b, x, o;
//     int i = 0, t = 0;

//     cout << "Enter the main string: ";
//     cin >> str1;

//     cout << "Enter the substring: ";
//     cin >> str2;

//     cout << "Enter position where string is to be inserted: ";
//     cin >> p;

//     pos = p - 1;
//     len1 = strlen(str1);
//     len2 = strlen(str2);

//     while (i <= len1)
//     {
//         c[i] = a[i];
//         i++;
//     }
//     c[i] = '\0';
//     int total = len1 + len2;

//     for (i = pos; i < total; i++)
//     {
//         x = c[i];

//         a[o] = x;
//         o = o + 1;

//         if (t < len2)
//         {
//             a[i] = b[t];
//             t = t + 1;
//         }
//     }
//     cout << a;
//     return 0;
// }
// DELETING SUBSTRING//
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[50], str2[50];
    int p, i, n;
    cout << "Enter the string: ";
    cin >> str1;
    for (int len = 0; str1[len] != '\0'; len++)
        ;
    cout << "Enter the substring: ";
    cin >> str2;

    cout << "Enter starting position of the substring to be deleted";
    cin >> p;
    cout << "Enter the number of characters to be deleted";
    cin >> n;
    for (i = p - 1; str1[i] != '\0'; i++)
    {
        str1[i] = str1[i + n];
        cout << "\nString after deletion of substring is: " << str1;
    }
}