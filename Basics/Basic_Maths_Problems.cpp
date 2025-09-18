// Basic maths related problems will be solved here.

#include <bits/stdc++.h>
using namespace std;

// count digits
int main()
{

    // when number of iteration based on division then the time compplexity will be O(log n)
    // and the base of the log will be the divisor

    int count = 0;
    int digit;
    cout << "Enter a number: ";
    cin >> digit;
    while (digit > 0)
    {
        count++;
        digit = digit / 10;
    }
    cout << "number of digits are: " << count << endl;

    // reverse a number and to check if it is palindrome or not
    // time complexity is O(log n) base 10
    int num, revNum = 0;
    cout << "Enter a number: ";
    cin >> num;
    int duplicateNum = num; // to check palindrome we need the original number
    while (num > 0)
    {
        int lastdigit = num % 10;
        revNum = (revNum * 10) + lastdigit;
        num = num / 10; // because we have to remove the last digit which we have already taken
    }
    cout << "Reversed number is: " << revNum << endl;

    if (revNum == duplicateNum)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }

    // armstrong number :- sum of cubes of each digit is equal to the number itself
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    int duplicateNumber = number; // to check armstrong we need to store the original number
    while (number > 0)
    {
        int lastdigit = number % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        number = number / 10; // because we have to remove the last digit which we have already taken
    }
    if (sum == duplicateNumber)
    {
        cout << "The number is an armstrong number." << endl;
    }
    else
    {
        cout << "The number is not an armstrong number." << endl;
    }

    // factors of a number
    // the time complexity of this operation is Big O(n)
    // int number1;
    // cout << "Enter a number: ";
    // cin >> number1;
    // for (int i = 1; i <= number1; i++)
    // {
    //     if (number1 % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // another way to find factors of a number
    // the time complexity of this operation is Big O(sqrt(n))
    int number1;
    cout << "Enter a number: ";
    cin >> number1;
    vector<int> ls;
    for (int i = 1; i <= sqrt(number1); i++)
    {
        if (number1 % i == 0)
        {
            ls.push_back(i);
            if (i != number1 / i) // to avoid the square root being added twice
            {
                ls.push_back(number1 / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;

    // prime number
    // time complexity is O(n)
    int count1 = 0;
    int number2;
    cout << "Enter a number: ";
    cin >> number2;
    for (int i = 1; i <= number2; i++)
    {
        if (number2 % i == 0)
        {
            count1++;
        }
    }
    if (count1 == 2)
    {
        cout << "The number is a prime number." << endl;
    }
    else
    {
        cout << "The number is not a prime number." << endl;
    }

    // greatest common divisor (gcd) or highest common factor (hcf) of two numbers using equilateral algorithm
    // time complexity is O(log(min(n1,n2)))
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int a = n1;
    int b = n2;
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        cout << "GCD is: " << b << endl;
    }
    else
    {
        cout << "GCD is: " << a << endl;
    }

    return 0;
}