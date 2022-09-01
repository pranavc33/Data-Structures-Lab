// // #include <iostream>
// // using namespace std;

// // void selectionsort(int arr[], int n)
// // {
// //     int i, j, small;
// //     for (i = 0; i < n - 1; i++)
// //     {
// //         small = i;
// //         for (j = i + 1; j < n; j++)
// //         {
// //             if (arr[j] < arr[i])
// //             {
// //                 small = j;
// //             }
// //             int temp = arr[small];
// //             arr[small] = arr[i];
// //             arr[i] = temp;
// //         }
// //     }

// //     void printArray(int arr[], int n);
// //     {
// //         int i;
// //         for (i = 0; i < n; i++)
// //             ;
// //         cout << arr[i] << " ";
// //     }
// // }
// // int main()
// // {
// //     int a[] = {80, 10, 29, 11, 8, 30, 15};
// //     int n = sizeof(arr) / sizeof(arr[0]);
// //     cout << "Before sorting array elements are: " << endl;
// //     return printArray(arr, n);
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// void swapping(int &a, int &b)
// { // swap the content of a and b
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// void display(int array, int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << array[i] << " ";
//     cout << endl;
// }
// void selectionSort(int array, int size)
// {
//     int i, j, imin;
//     for (i = 0; i < size - 1; i++)
//     {
//         imin = i; // get index of minimum data
//         for (j = i + 1; j < size; j++)
//             if (array[j] < array[imin])
//                 imin = j;
//         // placing in correct position
//         swap(array[i], array[imin]);
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n]; // create an array with given number of elements
//     cout << "Enter elements:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Array before Sorting: ";
//     display(arr, n);
//     selectionSort(arr, n);
//     cout << "Array after Sorting: ";
//     display(arr, n);
// }
