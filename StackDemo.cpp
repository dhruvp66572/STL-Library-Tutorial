#include <iostream>
#include <stack>
using namespace std;

void display(stack<string> s)
{
    cout << "String Stack ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    // Create Stack
    stack<string> s;

    // Push Data in Deque to multi ways
    s.push("Dhruv");
    cout << "Dhruv Pushed" << endl;
    s.push("Prajapati");
    cout << "Prajapati Pushed" << endl;

    // Print Top Element
    cout << "Top Element is " << s.top() << endl;

    display(s);

    // Pop Element
    s.pop();

    // Print Top Element
    cout << endl
         << "Top Element is " << s.top() << endl;

    // Print Size of Stack
    cout << "Size of Stack is " << s.size() << endl;

    // Check Stack Empty or Not
    cout << "Stack is Empty or Not " << s.empty() << endl;

    display(s);

    return 0;
}