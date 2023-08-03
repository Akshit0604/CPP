#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector<int>n; //declaring a vector
    //vectors are arrays whose size is dynamic
    n.assign(9,1);
    for(int i=0;i<n.size();i++)
        cout<<n[i]<<" ";
    cout<<endl;

    n.push_back(2); //Many other methods are there for vectors
    for(int i=0;i<n.size();i++)
        cout<<n[i]<<" ";
    cout<<endl;

    n.insert(n.begin(),7); //first param= pos, second param= element to be inserted
    for(int i=0;i<n.size();i++)
        cout<<n[i]<<" ";
    cout<<endl;
 
    cout<<n.size()<<endl; //size of vector
    cout<<n.capacity()<<endl; //how many elemets vector can store

    for(auto a=n.begin();a!=n.end();a++)
        cout<<*a<<" ";
    cout<<endl;
    
    for(int x=0;x<=10;x++)
        n.push_back(x);
    
    for(int i=0;i<n.size();i++)
        cout<<n[i]<<" ";
    cout<<endl;
    
    cout<<n.size()<<endl; //size of vector
    cout<<n.capacity()<<endl; //how many elemets vector can store
    cout<<n.max_size()<<endl; //max no of ints the vector can hold
    
    n.resize(5);
    for(int i=0;i<n.size();i++)
        cout<<n[i]<<" ";
    cout<<endl;
    
    n.clear(); //empties the vector
    for(int i=0;i<n.size();i++)
        cout<<n[i]<<endl;
}