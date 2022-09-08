#include <iostream>
using namespace std;
int main()
{
    int i, j, target, mid, end, start, a[10], found = 0, pos;
    cout << "Enter the numbers\n";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the target element\n";
    cin >> target;
    for (i = 0; i < 10; i++)
    {
        start = 0;
        end = 9;
        mid = (start + end) / 2;
        if (target > a[mid])
        {
            start = mid + 1;
            mid = (start + end) / 2;
        }
        if (target < a[mid])
        {
            end = mid - 1;
            mid = (end + start) / 2;
        }
        if (a[i] == target)
        {
            found = 1;
            pos = i + 1;
        }
    }
    cout << "The number was found at\n"
         << pos;
}