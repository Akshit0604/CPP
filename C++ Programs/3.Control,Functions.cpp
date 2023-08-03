//CPP programme if, else, loops, functions
#include <iostream>
#include<cmath>
using namespace std;

int even(int i){
    return i*i;
}

int odd(int i){
    float f;
    f=sqrt(i);
    return f;
}

int main() {
    
    int j;
    cout<<"enter j: ";
    cin>>j;
    
    for(int i=j;i<j+10; i++){
        if(i%2==0)
            cout<<even(i)<<endl;
        else 
            cout<<odd(i)<<endl;
    }
}