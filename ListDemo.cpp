#include <iostream>
#include <list>
using namespace std;

void display(list<int> l)
{
    cout << "List ";
    for (int i : l)
    {
        cout << i << " ";
    }
}

int main()
{
    // Create List
    list<int> l;

    // Push Data in Deque to multi ways
    l.push_front(500);
    cout << "500 Push in Front" << endl;

    l.push_back(100);
    cout << "100 Push in Back" << endl;

    display(l);

    return 0;
}