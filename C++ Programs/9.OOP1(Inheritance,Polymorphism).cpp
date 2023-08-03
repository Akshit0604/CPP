#include <iostream>
using namespace std;

class parent{
    
    public:
    string name1="Zinadine";
    string name2="Zidane";
    
    void age(){
        cout<<"Who is older?"<<endl;
    }
};

class child: public parent{ //child class of parent
    
    public:
    string name1="Enzo";
    void age(){
        cout<<"I am 23"<<endl;
    }
};

class wife: public parent{
    
    public:
    string name1="Veronique";

    void age(){
        cout<<"I am 53."<<endl;
    }
};

int main() {

    parent p;
    child ch;
    wife w;
    
    cout<<ch.name1 + " " + ch.name2<<endl; //inhertiance
    cout<<w.name1 + " " + w.name2<<endl; //inhertiance
    
    p.age();
    ch.age(); //polymorphism
    w.age(); //polymorphism
    
    //same method (age) has different outcomes in different classes
    //this is polymorphism

    
}