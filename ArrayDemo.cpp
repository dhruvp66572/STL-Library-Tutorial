#include <iostream>
#include <array>

using namespace std;

int main()
{
    // Normal Array that we used
    cout << "Normal Array"<<endl;
    int arr[3] = {10,20,30};

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i]<<" ";
    }


    // STL Library's Components

    // Create Array 
    cout <<endl<<endl<< "STL Array"<<endl;
    array<int,5> stl_arr = {100,200,300,400,500};

    // Find The Size of Array
    int Size = stl_arr.size();
    cout <<"Size Of Array is "<<Size<<endl ;

    // Print the array
    for (int i = 0; i < Size; i++)
    {
        cout <<"Array ["<<i<<"] = "<<stl_arr[i] << endl ;
    }
    

    // Get Value From The Index
    cout << endl << "Element at 2nd index is "<<stl_arr.at(2);

    // Check Array Empty or Not using Emty() Function
    cout << endl<<"Array is  "<< stl_arr.empty()<<"\t(if 0 = false and 1 = true)";
         
    // Get First And Last Element of Array
    cout << endl << "First Element is "<<stl_arr.front();
    cout << endl << "Last Element is "<<stl_arr.back();

    return 0;
}