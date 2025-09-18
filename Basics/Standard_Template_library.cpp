#include <bits/stdc++.h>
using namespace std;

// standard template library in  c++

int main()
{
    // Pairs
    // pairs are the data structure which is used to store two values of different data types and same data types also .
    pair<int, string> p = {1, "Paris"};
    // P.first refers to the first element of the pair, and p.second refers to the second element.
    cout << "Pair: " << p.first << ", " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << "Nested Pair: " << p1.first << ", " << p1.second.first << ", " << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Array of Pairs: " << arr[1].second << endl;

    // Vectors
    // vector is container which is dynamic in nature
    vector<int> v;
    v.push_back(10);    // Add element to the end of the vector
    v.emplace_back(20); // Add element to the end of the vector
    cout << "Vector: " << v[0] << ", " << v[1] << endl;

    v.pop_back(); // Remove the last element
    cout << "Vector after pop_back: " << v[0] << endl;
    cout << "Vector size after pop_back: " << v.size() << endl;

    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(3, 4);
    cout << "Vector of Pairs: " << v1[0].first << ", " << v1[1].second << endl;

    vector<int> v2(5, 10); // Initialize vector with 5 elements, each of value 10
    vector<int> v3(v2);    // Copy constructor
    cout << "Vector v2: " << v2[0] << ", " << v2[1] << ", " << v2[2] << ", " << v2[3] << ", " << v2[4] << endl;
    cout << "Vector v3: " << v3[0] << ", " << v3[1] << ", " << v3[2] << ", " << v3[3] << ", " << v3[4] << endl;
    v3.clear(); // Clear the vector
    cout << "Vector v3 after clear: " << v3.size() << endl;

    // iterators in vector
    // Iterators are used to traverse through the elements of a container.
    vector<int> v4 = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v4.begin(); // it points to the first element address of vector v4
    // to accsess value that point adreess we use *
    cout << "First element using iterator: " << *it << endl; // Dereference the iterator to get the value

    it++; // Move the iterator to the next element
    cout << "Second element using iterator: " << *it << endl;

    vector<int>::iterator it1 = v4.end();                          // it1 points to the end of the vector
    cout << "Last element using iterator: " << *(it1 - 1) << endl; // Dereference the last element

    // erase function in vector
    v4.erase(v4.begin() + 2); // Erase the third element
    v4.erase(v4.begin());     // Erase the first element
    cout << "Vector after erase: ";
    for (int i : v4)
    {
        cout << i << " ";
    }

    cout << endl;

    // insert function in vector

    v4.insert(v4.begin() + 1, 10);    // Insert 10 at the second position
    v4.insert(v4.end(), 20);          // Insert 20 at the end
    v4.insert(v4.begin(), 30);        // Insert 30 at the beginning
    v4.insert(v4.begin() + 3, 2, 10); // Insert 10 twice at the third position
    cout << "Vector after insert: ";
    for (int i : v4)
    {
        cout << i << " ";
    }
    cout << endl;

    // copy function in vector
    vector<int> v5(v4.begin(), v4.end()); // Copy using iterators
    cout << "Copied Vector: ";
    for (int i : v5)
    {
        cout << i << " ";
    }
    cout << endl;

    // Next topic is list
    // List :- list is a container and it is dynamic in nature
    list<int> ls;
    ls.push_back(10);    // Add element to the end of the list
    ls.emplace_back(20); // Add element to the end of the list
    ls.push_front(5);    // Add element to the front of the list
    cout << "List: ";
    for (int i : ls)
    {
        cout << i << " ";
    }
    cout << endl;

    // rest of the functions are same as vector
    // begin , end , rbegin ,rend ,clear ,insert , size ,swap

    // deque
    // deque is a double ended queue and it is dynamic in nature
    deque<int> dq;
    dq.push_back(10);    // Add element to the end of the deque
    dq.emplace_back(20); // Add element to the end of the deque
    dq.push_front(5);    // Add element to the front of the deque
    cout << "Deque: ";
    for (int i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
    dq.pop_back();  // Remove the last element
    dq.pop_front(); // Remove the first element
    cout << "Deque after pop: ";
    for (int i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    // rest of the functions are same as vector
    // begin , end , rbegin ,rend ,clear ,insert , size ,swap

    // stack
    // stack is a container which follows LIFO (Last In First Out) principle
    stack<int> st;
    st.push(10);
    st.emplace(20); // Add element to the top of the stack
    cout << "Stack top: " << st.top() << endl;

    st.pop(); // Remove the top element
    cout << "Stack top after pop: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;
    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    // Queue
    // Queue is a container which follows FIFO (First In First Out) principle
    queue<int> q;
    q.push(10);    // Add element to the back of the queue
    q.emplace(20); // Add element to the back of the queue
    q.back() = 30; // Modify the last element
    q.pop();       // Remove the front element
    q.front();     // Access the front element
    cout << "Queue After operations: ";
    cout << q.front() << endl;

    // Priority Queue
    // Priority Queue is a container which follows the priority order means the highest priority element is at the top
    // it is implemented as a max heap by default
    priority_queue<int> pq;
    pq.push(10);                                                  // Add element to the priority queue
    pq.emplace(20);                                               // Add element to the priority queue
    pq.push(5);                                                   // Add element to the priority queue
    cout << "Priority Queue top: " << pq.top() << endl;           // Access the top element
    pq.pop();                                                     // Remove the top element
    cout << "Priority Queue top after pop: " << pq.top() << endl; // Access the new top element

    // to set low priority element at the top
    // it also known as minimum heap or minimum priority queue
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10);
    min_pq.emplace(20);                                         // Add element to the min priority queue
    min_pq.push(5);                                             // Add element to the min priority queue
    cout << "Min Priority Queue top: " << min_pq.top() << endl; // Access the top element

    // Set
    // Set is a container which stores unique elements in sorted order
    set<int> s;
    s.insert(10);
    s.emplace(20);
    s.insert(10); // Duplicate element will not be added
    s.find(20);   // Find element in the set
    s.erase(10);  // Remove element from the set
    s.find(30);   // Check if element exists in the set if it does not exist it will return set.end()
    s.count(20);  // Count the number of occurrences of an element (0 or 1 for set)
    cout << "Set size: " << s.size() << endl;
    s.upper_bound(15); // Returns the first element greater than 15
    s.lower_bound(15); // Returns the first element not less than 15
                       // lower_bound → first occurrence of key or next greater.
                       // upper_bound → first element greater than key (skips all duplicates).

    cout << "Set elements: ";
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // multi set
    // multi set is a container which stores multiple occurrences of elements in sorted order
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);

    ms.erase(10); // It will erase all occurrences of 10
    cout << "Multiset size after erase: " << ms.size() << endl;

    // unordered set
    // all the operatoins are the same as set but it does not store elements in sorted order
    // lower bound and upper bound are not available in unordered set
    unordered_set<int> us;
    us.insert(10);
    us.emplace(20);
    us.insert(10); // Duplicate element will not be added
    us.erase(10);  // Remove element from the unordered set
    cout << "Unordered Set size: " << us.size() << endl;

    // Map
    // Map is a container which stores key-value pairs in sorted order of keys
    map<int, string> mp;
    mp[1] = "Devansh"; // Insert key-value pair
    mp.emplace(2, "Kumar");
    mp.insert({3, "Singh"});
    mp[2] = "Sharma"; // Update value for key 1
    cout << "Map elements: ";
    for (auto it : mp) // auto is a keyword that lets the compiler automatically figure out the type of a variable based on the value you assign to it.
    {
        cout << it.first << " -> " << it.second << ", " << endl;
    }

    cout << mp[1] << endl; // Access value for key 1

    // MultiMap
    // MultiMap is a container which stores multiple key-value pairs with the same key in sorted order of keys
    // all the functions are similar as map

    // sorting

    vector<int> v6 = {5, 2, 8, 1, 3};
    sort(v6.begin(), v6.end()); // Sort in ascending order
    cout << "Sorted Vector: ";
    for (int i : v6)
    {
        cout << i << " ";
    }

    pair<int, int> a[] = {{1, 2}, {3, 1}, {2, 4}};
    sort(a, a + 3); // it will sort according to first element if first element is same then it will sort according to second element

    cout << "sorted pairs : ";
    for (auto i : a)
    {
        cout << i.first << " " << i.second << endl;
    }

    int num = 7;
    int cnt = __builtin_popcount(num); //__builtin_popcount(x) returns how many 1s are in the binary form of x.

    long long num1 = 1234567890123;
    int cnt1 = __builtin_popcountll(num1); // for long long use __builtin_popcountll

    cout << "Number of set bits in " << num << " = " << cnt << endl;
    cout << "Number of set bits in " << num1 << " = " << cnt1 << endl;

    return 0;
}