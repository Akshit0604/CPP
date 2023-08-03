#include <iostream>
using namespace std;

class Gambit{
    
    public:
    Gambit(){ // this is cinstructor method
        cout<<"Hello! Im in constructor!"<<endl; 
    } // constructor function is the first to be called upon declaring class
    ~Gambit(){ // this is destructor method
        cout<<"Hello! Im destructor!"<<endl;
    } // destructor method is the last call
    void display(){
        cout<<"Hello! Im display!"<<endl;
    }
};

int main() {

  Gambit g;
  g.display();
  
}