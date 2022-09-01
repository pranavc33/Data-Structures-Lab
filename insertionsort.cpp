#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
}

void swap(int arr[], int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    temp = arr[second];
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}

int main()
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion(arr, n);
    printArray(arr, n);
}