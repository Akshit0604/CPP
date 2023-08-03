#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    vector<int> ar={1,2,3,4,5};
    vector<int>::iterator ptr; //iterator(behaves like pointer)
    cout<<"The elements are: \n";
    for(ptr=ar.begin();ptr!=ar.end();ptr++)
        cout<<*ptr<<" ";
    cout<<endl<<endl;
    
    int i=7;
    int j=10;
    cout<<"i: "<<i<<endl;
    cout<<"J: "<<j<<endl;
    swap(i,j);
    cout<<"i: "<<i<<endl;
    cout<<"j: "<<j<<endl;
    cout<<endl;
    //Many other algos like swap are there
    //https://www.geeksforgeeks.org/algorithms-library-c-stl/
    
    
}