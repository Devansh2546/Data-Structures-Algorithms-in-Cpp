#include <iostream>
#include <bits/stdc++.h> // This header includes all standard library headers
using namespace std;     // this line allows us to use standard library names without the std:: prefix
// Functions
void greet()
{
    cout << "Hello, welcome to the C++ program!" << endl;
}

int add(int sum1, int sum2)
{
    int sum = sum1 + sum2;
    cout << "The sum is: " << sum << endl;
    return sum;
}

// pass by refrence
void modifyValue(int &value)
{
    value += 10; // This will modify the original value
}

// pass by value
void modifyValueByValue(int value1)
{
    value1 += 10; // This will not modify the original value
}

// array will always go with pass refrence

int main()
{

    int value = 5;
    cout << "Original value: " << value << endl;
    modifyValue(value);
    cout << "Modified value: " << value << endl;

    int value1 = 10;
    cout << "Original value before pass by value: " << value1 << endl;  
    modifyValueByValue(value1);
    cout << "Value after pass by value: " << value1 << endl;

    greet(); // Call the greet function
    add(36, 4);

    std::cout << "Hello, World!" << std::endl;
    // return 0;

    // int x, y;
    // cin >> x >> y;
    // cout << "You entered: " << x << endl
    //      << "and :" << y << endl;

    // data types
    int a = 10;                  // Integer
    float b = 20.5;              // Floating point number
    char c = 'A';                // Character
    string d = "Hello";          // String
    bool e = true;               // Boolean
    long f = 100000L;            // Long integer
    long long g = 10000000000LL; // Long long integer

    // string str ;
    // getline(cin, str); // Read a line of text
    // cout << "You entered: " << str << endl;

    // Output the data types
    // cout << "Integer: " << a << endl;
    // cout << "Float: " << b << endl;
    // cout << "Character: " << c << endl;
    // cout << "String: " << d << endl;
    // cout << "Boolean: " << e << endl;
    // cout << "Long: " << f << endl;
    // cout << "Long Long: " << g << endl;

    // if else statement
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult." << endl;
    }
    else
    {
        cout << "You are a minor." << endl;
    }

    // if else ladder
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks < 25)
    {
        cout << "You are failed." << endl;
    }
    else if (marks <= 44)
    {
        cout << "You are passed." << endl;
    }
    else if (marks <= 59)
    {
        cout << "You are passed with second division." << endl;
    }
    else if (marks <= 74)
    {
        cout << "You are passed with first division." << endl;
    }
    else if (marks >= 75)
    {
        cout << "You are passed with distinction." << endl;
    }

    // if else ladder
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0)
    {
        cout << "The number is positive." << endl;
    }
    else if (number < 0)
    {
        cout << "The number is negative." << endl;
    }
    else
    {
        cout << "The number is zero." << endl;
    }

    // switch case statement
    int day;
    cout << "Enter a day number (1-7): ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid day number!" << endl;
        break;
    }

    // array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array elements: " << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[3] = 10;            // Modify the fourth element
    arr[3] = +10;           // adding value to fourth element
    cout << arr[3] << endl; // Output the modified element

    // 2D array
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "2D Array elements:" << matrix[1][2] << endl;

    // for loops
    for (int i = 0; i < 2; i++)
    {
        cout << "Hello World" << endl;
    }

    // while loop
    int a1 = 0;
    while (a < 2)
    {
        cout << "Hello World" << endl;
        a1++;
    }

    // do while loop
    int j = 0;
    do
    {
        cout << "Hello World" << endl;
        j++;
    } while (j < 2);

    return 0;
}
