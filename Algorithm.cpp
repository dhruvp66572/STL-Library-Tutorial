#include "bits/stdc++.h"
#include <vector>
using namespace std;

// #include <algorithm>

int main()
{
    // Algorithm
    // Algorithm Properties -> Algorithm, No Data Structure, No Container, No Data Type, No Data, No Memory, No Storage, No Access, No Modification
    
    // Create Vector
    vector<int> v;

    // Insert Element
    v.push_back(1);
    v.push_back(8);
    v.push_back(2);
    v.push_back(10);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(5);
    v.push_back(9);
    v.push_back(4);

    // Sort Vector
    sort(v.begin(), v.end());
    
    // Print Vector
    for (auto i : v)
    {
        cout << i << " ";
    }
    
    cout << endl;

    // Find Element in Vector using Binary Search
    if (binary_search(v.begin(), v.end(), 5))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    // Find Element in Vector using Lower Bound
    auto it = lower_bound(v.begin(), v.end(), 5);
    if (it != v.end())
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    // Find Element in Vector using Upper Bound
    auto it2 = upper_bound(v.begin(), v.end(), 5);
    if (it2 != v.end())
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    // Max Element find
    int a = 10;
    int b = 20;

    cout << max(a, b) << endl;

    // Min Element find
    cout << min(a, b) << endl;

    // Swap Element
    swap(a, b);
    cout << a << " " << b << endl;

    // Reverse Element
    reverse(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    // Rotate Element
    rotate(v.begin(), v.begin() + 3, v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    // Next Permutation
    next_permutation(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    // Prev Permutation
    prev_permutation(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    // Distance
    cout << distance(v.begin(), v.end()) << endl;

    // Count
    cout << count(v.begin(), v.end(), 5) << endl;

    // Find Element using Find Algorithm Function 
    auto it3 = find(v.begin(), v.end(), 5);
    if (it3 != v.end())
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    // Find If Element is Even or Odd using Lambda Function and Find If Algorithm Function 
    auto it4 = find_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    if (it4 != v.end())
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    // Find If Element is Greater than 5 using Lambda Function and Find If Algorithm Function
    auto it5 = find_if(v.begin(), v.end(), [](int x) { return x > 5; });
    if (it5 != v.end())
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    // Find If Element is Less than 5 using Lambda Function and Find If Algorithm Function
    auto it6 = find_if(v.begin(), v.end(), [](int x) { return x < 5; });
    if (it6 != v.end())
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    // Find If Element is Greater than 5 using Lambda Function and Find If Algorithm Function
    auto it7 = find_if_not(v.begin(), v.end(), [](int x) { return x > 5; });
    if (it7 != v.end())
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }


    return 0;
}
