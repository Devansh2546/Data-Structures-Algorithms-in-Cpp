#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Time complexity : O(n) and Space complexity : O(1).
void SecondLargest(int arr[], int n)
{
    if (n < 2)
    {
        cout << "Invalid Input" << endl;
        return;
    }

    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    int secondLargest = smallest;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "Second Largest Element in array is : " << secondLargest << endl;
}

// Time complexity : O(n) and Space complexity : O(1).
void SecondSmallest(int arr[], int n)
{
    if (n < 2)
    {
        cout << "Invalid Input" << endl;
        return;
    }

    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    int SecondSmallest = largest;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < SecondSmallest && arr[i] > smallest)
        {
            SecondSmallest = arr[i];
        }
    }
    cout << "Second Smallest Element in array is : " << SecondSmallest << endl;
}

int main()
{
    int arr[] = {10, 30, 50, 60, 20, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    // total bytes / bytes per element = number of elements

    printArray(arr, n);

    SecondLargest(arr, n);
    SecondSmallest(arr, n);

    return 0;
}