#include <iostream>
using namespace std;

// Function to perform Shell Sort
void shellSort(int n)
{
    int arr[] = {5, 2, 9, 1, 4, 6}; // Array to be sorted

    for (int gap = n / 2; gap > 0; gap /= 2)
    {

        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j = i;

            while (j >= gap && arr[j - gap] > temp)
            {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 6; // Size of the array
    cout << "Sorted array: ";
    shellSort(n);
}