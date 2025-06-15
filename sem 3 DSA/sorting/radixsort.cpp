#include <iostream>
using namespace std;

// Function to get the maximum value in the array
int getMax(int arr[], int size)
{
    int m = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
        }
    }
    return m;
}

// Counting sort based on a specific digit (divisor)
void countingSort(int arr[], int size, int div)
{
    int output[size];    // Output array to hold sorted elements
    int count[10] = {0}; // Initialize count array for digits 0-9

    // Count occurrences of each digit at the current place (div)
    for (int i = 0; i < size; i++)
    {
        int digit = (arr[i] / div) % 10;
        count[digit]++;
    }

    // Update count array to reflect positions in the output array
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    // Build the output array based on the current digit
    for (int i = size - 1; i >= 0; i--)
    {
        int digit = (arr[i] / div) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy the output array back to the original array
    for (int i = 0; i < size; i++)
    {
        arr[i] = output[i];
    }
}

// Radix sort function
void radixSort(int arr[], int size)
{
    int m = getMax(arr, size); // Get the maximum number to know the number of digits

    // Apply counting sort for each digit place (units, tens, hundreds, etc.)
    for (int div = 1; m / div > 0; div *= 10)
    {
        countingSort(arr, size, div);
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, size);

    radixSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}