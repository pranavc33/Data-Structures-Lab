// #include <iostream>
// using namespace std;

// int binarySearch(int a[], int size, int target)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid;
//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (a[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             mid = target;
//         }
//         if (a[mid] > target)
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int a[] = {2, 3, 4, 10, 40};
//     int target = 10;
//     int size = 5;
//     int result = binarySearch(a, 5, 10);
//     if (result == -1)
//         cout << "Element not found";
//     else
//         cout << "Element is at index " << result;
//     return 0;
// }

#include <iostream>
using namespace std;

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Check if x is present at mid
        if (arr[mid] == target)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < target)
            start = mid + 1;

        // If x is smaller, ignore right half
        else
            end = mid - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, target);
    if (result == -1)
    {
        cout << "Element is not present in array";
    }
    else
    {
        cout << "Element is present at index " << result;
    }
    return 0;
}