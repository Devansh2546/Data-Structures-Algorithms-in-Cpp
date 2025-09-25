#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++) // n-i-1 because last i elements will be automatically sorted
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Alternavtive option
                // swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "Sorted array using Bubble sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}