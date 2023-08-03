#include <iostream>
using namespace std;

class franchise{
    public:
    void KFC(){
        cout<<"We have the best chicken"<<endl;
    }
    void BK(){
        cout<<"We have the best burgers"<<endl;
    }
    
};

class billboard{
  
  private:
  string title;
  
  public:
  void setTitle(string x){
      title=x;
  }
  string getTitle(){
      return title;
  }
  
};

int main() {

  franchise f;
  f.KFC();
  f.BK();
  
  billboard b;
  b.setTitle("Top 5 songs of 2020");
  cout<<b.getTitle();
  
}