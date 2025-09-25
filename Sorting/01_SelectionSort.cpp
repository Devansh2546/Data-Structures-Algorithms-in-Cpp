#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= n - 2; i++) // n-2 because last element will be automatically sorted
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++) // n-1 because last element will be automatically sorted
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        // swap(arr[i], arr[mini]);

        // Swapping without using inbuilt function
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout << "Sorted array using Selection sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}