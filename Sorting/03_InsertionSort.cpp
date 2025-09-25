#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;

        // move elements of arr[0..i-1], that are greater than arr[i],
        // to one position ahead of their current position
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

            // alternative option
            // swap(arr[j - 1], arr[j]);
            j--;
        }
    }

    cout << "Sorted array using Insertion sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}