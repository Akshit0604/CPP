#include <iostream>
using namespace std;

int main() {
    
    int arr[]={5,17,20,7,9,4,6};
    int *p=arr;
    
    for(int i=0; i<7;i++)
        cout<<*p<<endl;
        p++;
}