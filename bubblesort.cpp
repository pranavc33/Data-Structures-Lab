// #include <iostream>
// using namespace std;
// int main()
// {
//     void displayArray(int arr[], int size)
//     {

//         int i;
//         for (i = 0; i < size; i++)
//         {
//             cout << arr[i] << "\t";
//             cout << endl;
//         }
//     }
//     int array[] = {12, 34, 56, 78, 89, 100, 123, 150};
//     int size = sizeof(array) / sizeof(array[0]);

//     displayArray(array, size);
//     // Unsorted Array//

//     bubbleSort(array, size);

//     // Calling bubbleSort function//

//     cout << "Sorted Array: \n";
//     displayArray(array, size);
// }

// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 temp = arr[j + 1];
//             }
//         }
//     }
// }

// void displayArray(int arr[], int size)
// {

//     int i;
//     for (i = 0; i < size; i++)
//     {
//         cout << arr[i] << "\t";
//         cout << endl;
//     }
// }
//

// #include <iostream>

// using namespace std;
// void bubbleSort(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         bool swapped = false;

//         for (int j = 0; j < n - i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 int temp = a[j];
//                 a[j] = a[j + 1];
//                 temp = a[j + 1];
//                 swapped = true;
//             }
//         }

//         if (swapped == false)
//         {
//             break;
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// void printArray(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << "\t";
//         cout << endl;
//     }
// }

// void bubbleSort(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 int temp = a[j];
//                 a[j] = a[j + 1];
//                 temp = a[j + 1];
//             }
//         }
//     }
// }

// int main()
// {
//     int a[] = {12, 45, 56, 67, 78, 89};
//     int n = 6;
//     printArray(a, n);
//     bubbleSort(a, n);
//     printArray(a, n);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}