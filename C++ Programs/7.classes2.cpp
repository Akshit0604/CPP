#include <iostream>
using namespace std;

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
  
  billboard(string b){
      setTitle(b);
  }
  
};

int main() {
  
  billboard bill("Top 3 songs of 2022");
  cout<<bill.getTitle();
  
}