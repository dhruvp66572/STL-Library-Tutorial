#include "bits/stdc++.h"
using namespace std;            

int main()
{
    // Set

    // Set Properties -> Unique Element, Sorted Order, No Duplicates, No Indexing, No Modification
           // No Random Access, No Push_back, No Pop_back, No Clear, No Copy, No Size, No Capacity, No Iterator.
    
    // Create Set
    set<int> s;

    // Insert Element
    s.insert(1);
    s.insert(1);
    s.insert(8);
    s.insert(2);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(3);
    s.insert(6);
    s.insert(7);
    s.insert(5);
    s.insert(9);
    s.insert(9);
    s.insert(9);
    s.insert(4);

    // Print Set
    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    // Find Element
    auto it = s.find(5);
    if (it != s.end())
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    // Erase Element
    s.erase(5);

    // Print Set
    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    // Count Element
    cout << "Count of 4 is " << s.count(4) << endl;

    // Size of Set
    cout << "Size of Set is " << s.size() << endl;

    // Clear Set
    s.clear();

    // Check Empty
    if (s.empty())
    {
        cout << "Set is Empty" << endl;
    }
    else
    {
        cout << "Set is Not Empty" << endl;
    }



    // Lower Bound
    it = s.lower_bound(4);
    cout << "Lower Bound of 4 is " << *it << endl;

    // Upper Bound
    it = s.upper_bound(4);
    cout << "Upper Bound of 4 is " << *it << endl;

    // Equal Range
    pair<set<int>::iterator, set<int>::iterator> p = s.equal_range(4);
    cout << "Equal Range of 4 is " << *p.first << " " << *p.second << endl;



    return 0;
}
