#include <iostream>
#include<vector>
using namespace std;

class functionObj{
    public:
    int operator()(int x, int y){
        return x*y;
    }
};

int main() {
    
    functionObj fo;
    int mult=fo(4,7);
    cout<<mult;
}