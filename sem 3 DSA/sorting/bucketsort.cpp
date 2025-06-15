#include <iostream>
#include <algorithm>
using namespace std;
void bucketSort(float arr[], int n)
{
    if (n <= 1)
        return;
    const int BUCKET_SIZE = 10;
    float buckets[BUCKET_SIZE][n];
    int bucketCounts[BUCKET_SIZE] = {0};
    for (int i = 0; i < n; ++i)
    {
        int index = arr[i] * BUCKET_SIZE;
        buckets[index][bucketCounts[index]] = arr[i];
        bucketCounts[index]++;
    }
    int index = 0;
    for (int i = 0; i < BUCKET_SIZE; ++i)
    {
        if (bucketCounts[i] > 0)
        {
            sort(buckets[i], buckets[i] + bucketCounts[i]);
            for (int j = 0; j < bucketCounts[i]; ++j)
            {
                arr[index++] = buckets[i][j];
            }
        }
    }
}
int main()
{
    float arr[] = {0.79, 0.13, 0.64, 0.39, 0.20, 0.89, 0.53, 0.42, 0.06, 0.94};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
    bucketSort(arr, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}