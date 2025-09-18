#include <bits/stdc++.h>
using namespace std;

// Functin to print name n times using recursion
// time and space complexity will be O(n) due to recursive call stack

void printName(int i, int n)
{
    string name = "Devnash";
    if (i > n)
    {
        return;
    }
    else
    {
        cout << name << endl;
        printName(i + 1, n);
    }
}

// Function to print numbers from 1 to n using recursion
// time and space complexity will be O(n) due to recursive call stack

void printNum(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        cout << i << endl;
        printNum(i + 1, n);
    }
}

// Function to print numbers from n to 1 using recursion
// time and space complexity will be O(n) due to recursive call stack

void printRevNum(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    else
    {
        cout << i << endl;
        printRevNum(i - 1, n);
    }
}

// Function to print 1 to n using backtracking
// time and space complexity will be O(n) due to recursive call stack

void printNum1(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    else
    {
        printNum1(i - 1, n);
        cout << i << endl;
    }
}

// Funtion to print n to 1 using backtracking
// time and space complexity will be O(n) due to recursive call stack

void printRevNum1(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        printRevNum1(i + 1, n);
        cout << i << endl;
    }
}

// sumation of 1 to n numbers using recursion

// time and space complexity will be O(n) due to recursive call stack
void sumation(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    else
    {
        sumation(i - 1, sum + i);
    }
}

// another way for sumation of 1 to n numbers using recursion
// time and space complexity will be O(n) due to recursive call stack

int sumation1(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sumation1(n - 1);
    }
}

// Function to reverse an array using recursion
// time and space complexity will be O(n) due to recursive call stack

int RevArr(int arr[], int left, int right)
{

    if (left >= right)
    {
        return 0;
    }
    swap(arr[left], arr[right]);
    RevArr(arr, left + 1, right - 1);
    return arr[5];
}

// Function to check if a string is palindrome or not using recursion
// time and space complexity will be O(n) due to recursive call stack
bool palindrome_string(int i, string &s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return palindrome_string(i + 1, s);
}
// function to find nth fibonacci number using recursion
// time complexity will be O(2^n) and space complexity will be O(n)
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = fibonacci(n - 1);
    int secondlast = fibonacci(n - 2);
    return last + secondlast;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Print name function" << endl;
    printName(1, n);

    cout << "Print number function" << endl;
    printNum(1, n);

    cout << "Print reverse number function" << endl;
    printRevNum(n, n);

    cout << "Print number using backtracking" << endl;
    printNum1(n, n);

    cout << "Print reverse number using backtracking" << endl;
    printRevNum1(1, n);

    cout << "Sumation of 1 to n numbers using recursion" << endl;
    sumation(n, 0);
    cout << sumation1(n) << endl;

    cout << "Reverse an array using recursion" << endl;
    RevArr(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Check palindrome string using recursion" << endl;
    palindrome_string(0, s) ? cout << "Palindrome" << endl : cout << "Not Palindrome" << endl;

    cout << "Fibonacci series using recursion" << endl;
    fibonacci(n);

    return 0;
}
