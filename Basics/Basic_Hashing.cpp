// Hashing :- Hashing is a way to store and find data quickly.
// You give your data (like a number, name, or string) to a special function called a hash function.
// This function converts the data into a fixed-size number called a hash value or hash code.
// That number tells you where to store the data in a table called a hash table.
// When you want to find the data again, you run the same hash function on your key, and it directly points to the location — so you don’t have to search everything.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Program to check number of occurrences of elements in an array using hashing
    // Time complexity is O(n) for precomputation and O(1) for each query so it is O(n + q) overall

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array (values between 0 and 12):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Precomputation: Build frequency (hash) array
    int hash[13] = {0}; // Only works for numbers 0 to 12
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++; // Count occurrences of each number
    }

    // Querying
    int q;
    cout << "Enter how many numbers you want to check frequency for: ";
    cin >> q;

    while (q--)
    {
        int key;
        cout << "Enter the number to check its frequency: ";
        cin >> key;

        // Display frequency
        if (key >= 0 && key < 13)
        {
            cout << "The number " << key << " appears " << hash[key] << " time(s) in the array." << endl;
        }
        else
        {
            cout << "Invalid number! Please enter a value between 0 and 12.\n";
        }
    }
    // Find highest and lowest frequency element
    int maxFreq = 0, maxElement = -1;
    int minFreq = INT_MAX, minElement = -1;

    for (int i = 0; i < 13; i++)
    {
        if (hash[i] > 0)
        { // ignore elements that never appeared
            if (hash[i] > maxFreq)
            {
                maxFreq = hash[i];
                maxElement = i;
            }
            if (hash[i] < minFreq)
            {
                minFreq = hash[i];
                minElement = i;
            }
        }
    }

    cout << "Element with highest frequency: " << maxElement
         << " (appears " << maxFreq << " times)\n";
    cout << "Element with lowest frequency: " << minElement
         << " (appears " << minFreq << " times)\n";

    cout << "----------------------------------------" << endl;
    cout << "----------------------------------------" << endl;

    // Program to check number of occurrences of characters in a string using hashing
    // Time complexity is O(n) for precomputation and O(1) for each query so it is O(n + q) overall
    string s;
    cout << "Enter a string to check frequency of characters: ";
    cin >> s;

    int hash_char[26] = {0}; // Only works for lowercase letters a-z
    for (int i = 0; i < s.length(); i++)
    {
        hash_char[s[i] - 'a']++;
    }

    int query;
    cout << "Enter how many characters you want to check frequency for: ";
    cin >> query;
    while (query--)
    {
        char ch;
        cout << "Enter the character to check its frequency: ";
        cin >> ch;

        if (ch >= 'a' && ch <= 'z')
        {
            cout << "The character " << ch << " appears " << hash_char[ch - 'a'] << " time(s) in the string." << endl;
        }
        else
        {
            cout << "Invalid character! Please enter a lowercase letter between a and z." << endl;
        }
    }

    cout << "----------------------------------------" << endl;
    cout << "----------------------------------------" << endl;

    // Program to check number of occurrences of elements in an array using Map & Unordered_Map
    // Time complexity is O(n) for precomputation and O(1) for each query so it is O(n + q) overall

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];
    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    unordered_map<int, int> freqMap;
    for (int i = 0; i < size; i++)
    {
        freqMap[array[i]]++;
    }

    // Using map instead of unorder map

    // map<int,int> freqMap;
    // for (int i = 0; i < size; i++)
    // {
    //     freqMap[array[i]]++;
    // }

    // this is how to print all elements and their frequencies in a map/unordered_map.
    // cout << "Frequency of all elements in the array:"<< endl;
    // for(auto it : freqMap)
    // {
    //     cout << it.first << " -> " << it.second << endl;
    // }

    int query1;
    cout << "Enter how many numbers you want to check frequency for: ";
    cin >> query1;

    while (query1--)
    {
        int keyValue;
        cout << "Enter the number to check its frequency: ";
        cin >> keyValue;

        cout << "The number " << keyValue << " appears " << freqMap[keyValue] << " time(s) in the array." << endl;
    }
    return 0;
}