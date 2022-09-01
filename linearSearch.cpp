#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
            return i;
    }
    return -1;
}

int main()

{
    int a[] = {1, 2, 3, 4, 5, 6};
    int target;
    int size = sizeof(a) / (a[0]);
    cout << "Enter a number to search: ";
    cin >> target;

    int result = linearSearch(a, 6, target);

    if (result == -1)
    {
        cout << "Element was not found";
    }
    else
    {
        cout << "Element was not found at " << result << " index";
    }
}
