#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n^2) in worst case and O(nlogn) in average case
// Space Complexity: O(logn) because we don't use any extra space 

// Function to find partion position and to place pivot at correct position
int partion(vector<int> &arr, int low, int high)
{
    int indx = low - 1;              // it is used make place for smaller element than pivot
    int pivot = arr[high];           // taking last element as pivot
    for (int j = low; j < high; j++) // traverse from low to high-1
    {
        // to check if current element is smaller than pivot
        if (arr[j] <= pivot) // this will sort in increasing order
        // if (arr[j] >= pivot) // this will sort in decreasing order
        {
            indx++;
            swap(arr[indx], arr[j]);
        }
    }
    indx++;
    swap(arr[indx], arr[high]); // put pivot at correct position
    return indx;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high) // to check if array has more than one element or not.
    {
        int pi = partion(arr, low, high); // it will return the index of pivot element
        quickSort(arr, low, pi - 1);      // recursive call for left part
        quickSort(arr, pi + 1, high);     // recursive call for right part
    }
}

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    cout << "Sorted array using Quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}