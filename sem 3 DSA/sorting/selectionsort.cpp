#include <iostream>
using namespace std;
void selectsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_val = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_val])
            {
                min_val = j;
            }
        }
        swap(arr[i], arr[min_val]);
    }
}
void displayarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {7, 11, 9, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectsort(arr, n);
    displayarray(arr, n);
    selectsort(arr, n);
    return 0;
}