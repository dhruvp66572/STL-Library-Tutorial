#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main()
{
    // Create Vector type of integer
    vector<int> v;
    
    // Check Capacity Of Vector
    cout << endl<< "Capacity Of Vector is "<< v.capacity();

    // Push Data in Vector 
    v.push_back(100);
    cout << endl << "100 is pushed now Capacity is "<<v.capacity();
    v.push_back(200);
    cout << endl << "200 is pushed now Capacity is "<<v.capacity();
    v.push_back(300);
    cout << endl << "300 is pushed now Capacity is "<<v.capacity();
    v.push_back(400);
    cout << endl << "400 is pushed now Capacity is "<<v.capacity();
    v.push_back(500);
    cout << endl << "500 is pushed now Capacity is "<<v.capacity();
    v.push_back(900);
    cout << endl << "900 is pushed now Capacity is "<<v.capacity();
   
    int Size = v.size();

    cout << endl<< "Size Of Vector is "<< Size<<endl;

    for (int i = 0; i < Size; i++)
    {
        cout <<"Vector ["<<i<<"] = "<<v[i] << endl ;
    }
    
    // Pop_back Function is Used to remove element from the last element 
    v.pop_back();
    cout <<endl<< "After Pop_back Function Last Element is Poped here 900 is Poped"<<endl;
    for (int i = 0; i < Size; i++)
    {
        cout <<"Vector ["<<i<<"] = "<<v[i] << endl ;
    }


    // Clear Function If we clear the vector it clear the size of vector, Capacity is Same
    // cout << endl << "Before Clear The Vector Size is "<< v.size() <<" Capacity is "<<v.capacity();
    // v.clear();
    // cout << endl << "After  Clear The Vector Size is "<< v.size() <<" Capacity is "<<v.capacity();
    
    // Copy Vector From another Vector
    vector<int> newVactor(v);
    cout << "New Vactor is ";
    for (int i = 0; i < newVactor.size(); i++)
    {
        cout << newVactor[i] << " ";
    }
    
    // Secound Method Of Print The Vector 
    // cout << endl;    
    // for(int i:newVactor){
    //     cout << i <<" ";
    // }

    return 0;
}