#include <iostream>
using namespace std;
int main()
{
    int i, j, a[50][50], b[50][50], m, p[50][50], s[50][50];
    cout << "Enter the number of rows and elements\n";
    cin >> m;
    cout << "Enter the elements\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements for B\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            p[i][j] = a[i][j] * b[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "The product of the matrices is: " << p[i][j];
    cout << "The sum of the matrices is: " << s[i][j];
}
