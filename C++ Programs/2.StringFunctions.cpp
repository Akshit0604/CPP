#include <iostream>
using namespace std;

int main() {
    
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<"You have entered: ";
    cout<<s<<endl;
    
    s.push_back('Y');
    cout<<"String after pushback: ";
    cout<<s<<endl;
    s.pop_back();
    cout<<"String after popback: ";
    cout<<s<<endl;

}