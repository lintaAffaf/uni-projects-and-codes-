#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {7, 11, 9, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    displayArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    displayArray(arr, n);

    return 0;
}