#include <iostream>
#include <queue>
using namespace std;

void display(queue<string> s)
{
    cout << "String Stack ";
    while (!s.empty())
    {
        cout << s.front() << " ";
        s.pop();
    }
}

int main()
{
    // Create Queue
    queue<string> s;

    // Push Data in Deque to multi ways
    s.push("Dhruv");
    cout << "Dhruv Pushed" << endl;
    s.push("Prajapati");
    cout << "Prajapati Pushed" << endl;

    // Print Front Element
    cout << "Front Element is " << s.front() << endl;

    display(s);

    // Pop Element
    s.pop();

    // Print Front Element
    cout << "Front Element is " << s.front() << endl;

    // Print Size of queue
    cout << "Size of Queue is " << s.size() << endl;

    // Check queue Empty or Not
    cout << "Queue is Empty or Not " << s.empty() << endl;

    display(s);

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    // priority queue 


    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout << "size-> " << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    cout << "khaali h kya bhai ?? -> " << mini.empty() << endl;
    return 0;
}