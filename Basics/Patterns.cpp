#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pattern 1
    //  int i, j; // rows and columns for the pattern
    //  for (i = 0; i < 4; i++)
    //  {
    //      for (j = 0; j < 4; j++)
    //      {
    //          cout << "*" ;
    //      }
    //      cout << endl; // New line after each row
    //  }

    // Pattern 2
    //  int i, j;
    //  for (i = 0; i < 5; i++)
    //  {
    //      for (j = 0; j < i + 1; j++)
    //      {
    //          cout << "*";
    //      }
    //      cout << endl; // New line after each row
    //  }

    // Pattern 3
    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 4
    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 5
    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 0; j < 5 - i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 6
    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 0; j < 5 - i + 1; j++)
    //     {
    //         cout << j + 1;
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 7
    // int i, j;
    // for (i = 0; i < 5; i++)
    // {
    //     // space
    //     for (j = 0; j < 5 - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (j = 0; j < 2 * i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space
    //     for (j = 0; j < 5 - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 8
    // int i, j;
    // for (i = 0; i < 5; i++)
    // {
    //     // space
    //     for (j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (j = 0; j < 2 * 5 - (2 * i + 1); j++)
    //     {
    //         cout << "*";
    //     }
    //     // space
    //     for (j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl; // New line after each row

    // Pattern 9
    // combine the code of [Pattern 7] and [Pattern 8]

    // Pattern 10
    // int i, j;
    // for (i = 1; i <= 9; i++)
    // {
    //     int stars = i;
    //     if (i > 5)
    //         stars = 10 - i; // Adjust for the second half of the pattern
    //     for (j = 1; j <= stars; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl; // New line after each row
    // }

    // Patter 11
    // int i, j;
    // int start = 1;
    // for (i = 0; i < 5; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         start = 1; // Start with 1 for even rows
    //     }
    //     else
    //     {
    //         start = 0; // Start with 0 for odd rows
    //     }
    //     for (j = 0; j <= i; j++)
    //     {
    //         cout << start;
    //         start = 1 - start; // Toggle between 0 and 1
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 12
    // int i, j;
    // int space = 2 * (5 - 1);
    // for (i = 1; i <= 5; i++)
    // {
    //     // numbers
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     // spaces
    //     for (j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     // numbers
    //     for (j = i; j >= 1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl; // New line after each row
    //     space = space - 2;
    // }

    // Pattern 13
    // int i, j;
    // int num = 1;
    // for (i = 0; i <= 5; i++)
    // {
    //     for (j = 1; j<= i; j++)
    //     {
    //         cout << num <<" ";
    //         num ++;
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 14
    // int i, j;
    // string arr = "ABCDE";
    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         cout << arr[j] << " ";
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 15
    // int i, j;
    // string arr = "ABCDE";
    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j < 5 - i; j++)
    //     {
    //         cout << arr[j] << " ";
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 16
    // int i, j;
    // string arr = "ABCDE";
    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 17
    // int i, j;
    // for (i = 0; i < 5; i++)
    // {
    //     // space
    //     for (j = 0; j < 5 - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     char ch = 'A';
    //     int break_point = (2 * i + 1) / 2; // Calculate the break point for the character increment
    //     for (j = 1; j <= 2 * i + 1; j++)
    //     {
    //         cout << ch;
    //         if (j <= break_point)
    //         {
    //             ch++; // Increment character until the break point
    //         }
    //         else
    //         {
    //             ch--; // Decrement character after the break point
    //         }
    //     }
    //     // space
    //     for (j = 0; j < 5 - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 18
    // for (int i = 0; i < 5; i++)
    // {
    //     for (char ch = 'E' - i; ch <= 'E'; ch++)
    //     {
    //         cout << ch << " ";
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 19
    // int i, j;
    // for (i = 0; i < 5; i++)
    // {

    //     // stars
    //     for (j = 0; j < 5 - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space
    //     for (j = 0; j < 2 * i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (j = 0; j < 5 - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl; // New line after each row
    // }
    // for (i = 0; i < 5; i++)
    // {
    //     // stars
    //     for (j = 0; j < i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space
    //     for (j = 0; j < 2 * (5 - i - 1); j++)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (j = 0; j < i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 20
    // int i, j;
    // int spaces = 2 * 5 - 2;

    // for (i = 1; i <= 2 * 5 - 1; i++)
    // {
    //     int stars = i;
    //     if (i > 5)
    //     {
    //         stars = 2 * 5 - i;
    //     }
    //     // stars
    //     for (j = 1; j <= stars; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space
    //     for (j = 1; j <= spaces; j++)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (j = 1; j <= stars; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl; // New line after each row
    //     if (i < 5)
    //     {
    //         spaces = spaces - 2; // Increment stars for the first half
    //     }
    //     else
    //     {
    //         spaces = spaces + 2; // Decrement stars for the second half
    //     }
    // }

    // Pattern 21
    // int i, j;
    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j < 5; j++)
    //     {
    //         if (i == 0 || i == 4 || j == 0 || j == 4)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl; // New line after each row
    // }

    // Pattern 22
    int i, j;
    for (i = 0; i < 2 * 5 - 1; i++)
    {
        for (j = 0; j < 2 * 5 - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * 5 - 2) - j;
            int bottom = (2 * 5 - 2) - i;
            cout << 5 - min(min(top, left), min(right, bottom)) << " ";
        }
        cout << endl; // New line after each row
    }
    return 0;
}