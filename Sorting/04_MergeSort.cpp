#include <bits/stdc++.h>
using namespace std;

// Time complexity of Merge Sort is O(n log n)
// Space complexity of Merge Sort is O(n)

// Merges two subarrays of arr[].
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]

void Merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> TempArr; // temporary array
    int left = low;      // starting index of left half of the array
    int right = mid + 1; // starting index of right half of the array
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {                                 // compare the elements of both halves
            TempArr.push_back(arr[left]); // push the smaller element to the temporary array
            left++;                       // move the pointer to the next element in the left half
        }
        else
        {
            // same here for right half
            TempArr.push_back(arr[right]);
            right++;
        }
    }

    // if there are any elements left in the left half we will push them to the temporary array
    while (left <= mid)
    {
        TempArr.push_back(arr[left]);
        left++;
    }

    // same here for right half
    while (right <= high)
    {
        TempArr.push_back(arr[right]);
        right++;
    }

    // now we will copy the elements from the temporary array to the original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = TempArr[i - low]; // i-low because we want to start from the beginning of the temporary array
    }
}

void MergeSort(vector<int> &arr, int low, int high)
{ // we took &arr because we want to modify the original array not a copy of it
    if (low == high)
        return;
    int mid = (low + high) / 2;
    MergeSort(arr, low, mid);      // to sort left half of the array
    MergeSort(arr, mid + 1, high); // to sort right half of the array
    Merge(arr, low, mid, high);    // to merge two sorted halves of the array
}
int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();
    MergeSort(arr, 0, n - 1);

    cout << "Sorted array using Merge Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}