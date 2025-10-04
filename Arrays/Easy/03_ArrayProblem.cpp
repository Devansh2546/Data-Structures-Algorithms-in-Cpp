#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicates from a sorted array
// Time complexity : O(n) and Space complexity : O(1).
int RemoveDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}
// Function to check if an array is sorted or not
// Time complexity : O(n) and Space complexity : O(1).
bool CheckArray(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // if (arr[i] >= arr[i - 1]) // to check array is sorted in ascending order(small to large)
        if (arr[i] < arr[i - 1]) // to check array is sorted in descending order (large to small)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {10, 10, 20, 20, 30, 30, 30, 40, 50, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int newArray = RemoveDuplicates(arr, n);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newArray; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr1[] = {9, 7, 5, 3, 1};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Array to check it is sorted or not: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    if (CheckArray(arr1, m))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}