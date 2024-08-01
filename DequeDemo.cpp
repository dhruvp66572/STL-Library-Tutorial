#include <iostream>
#include <deque>

using namespace std;

void display(deque<int> d){
    for (int i = 0; i < d.size(); i++)
    {
        cout <<"Deque ["<<i<<"] = "<<d[i] << endl ;
    }
}

int main()
{
    // Create Deque 
    deque<int> d;

    //push Data in Deque to multi ways
    d.push_front(500);
    cout << "500 Push in Front"<<endl;

    d.push_back(100);
    cout << "100 Push in Back"<<endl;

    display(d);

    // d.pop_back();
    // cout << endl << "100 Pop in front of Deque";
    // d.pop_front();
    // cout << endl << "500 Pop in front of Deque"<<endl;

    // for (int i = 0; i < d.size(); i++)
    // {
    //     cout <<"Deque ["<<i<<"] = "<<d[i] << endl ;
    // }

    // Get First And Last Element of Deque
    cout << endl << "a[1] Element is "<<d.at(1);
    cout << endl << "Front Element is "<<d.front();
    cout << endl << "Back Element is "<<d.back()<<endl;

    cout << endl << "Before Erase"<<endl;
    display(d);

    d.erase(d.begin(),d.begin()+1);

    cout  << "After Erase"<<endl;
    display(d);
    
    
    return 0;
}


