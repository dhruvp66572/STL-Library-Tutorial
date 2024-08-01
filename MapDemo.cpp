#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    // Map
    // Map Properties -> Key-Value Pair, Unique Key, Sorted Order, No Duplicates, No Indexing, No Modification
    // No Random Access, No Push_back, No Pop_back, No Clear, No Copy, No Size, No Capacity, No Iterator.

    // Create Map
    map<int, string> m;

    // Insert Element
    m[1] = "One";
    m[1] = "One";
    m[8] = "Eight";
    m[2] = "Two";
    m[10] = "Ten";
    m[3] = "Three";
    m[6] = "Six";
    m[7] = "Seven";
    m[5] = "Five";
    m[9] = "Nine";
    m[4] = "Four";

    // Print Map
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    // Find Element
    auto it = m.find(5);
    if (it != m.end())
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    // Erase Element
    m.erase(5);

    // Print Map
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    return 0;
}
