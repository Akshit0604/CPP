#include <iostream>
using namespace std;

int main() {
    
    int size;
    cout<<"Enter the size of input: ";
    cin>>size;
    int *ptr;
    ptr=new int[size]; //allocating memory
    
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter Element: ";
        cin>>ptr[i];
    }
    
    cout<<"Squares of entered elements: "<<endl;
    for(int i=0; i<size;i++)
        cout<<ptr[i]*ptr[i]<<endl;
        
    delete[] ptr; //deallocating memory
}