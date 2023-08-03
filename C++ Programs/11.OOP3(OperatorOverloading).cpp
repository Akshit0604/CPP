#include <iostream>
using namespace std;

class complex{
    private:
    int real;
    int imag;
    
    public:
    void input(){
        cout<<"Enter real and imag parts: ";
        cin>>real;
        cin>>imag;
    }
    complex operator + (complex obj){
        complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }
    void output(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    
};
int main() {

    complex com1,com2, res;
    cout<<"Enter first no: ";
    com1.input();
    cout<<"Enter second no: ";
    com2.input();
    res=com1+com2;
    res.output();
}