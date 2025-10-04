#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element in an array.
// Time complexity : O(n) and Space complexity : O(1).
void largestElement(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest Element in array is : " << largest << endl;
}

// Function to find the smallest element in array
// Time complexity : O(n) and Space complexity : O(1).
void smallestElement(int arr[], int n)
{
    int smallest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest Element in array is : " << smallest << endl;
}

void printArray(int arr[], int n)
{
    cout << "Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {10, 20, 5, 30, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    largestElement(arr, n);
    smallestElement(arr,n);
    return 0;
}