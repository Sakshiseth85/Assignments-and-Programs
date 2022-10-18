#include <iostream>
using namespace std;
class a{
    public:
    int x;
    void sum(){
        cout<<"sum"<<endl;
    }
};
class b:public a{
    public:
    // a obj;
    // a.sum();
    // sum(); niether atribute nor method
    int y;
    b(){
        sum();
    }
    void run(){
      sum();
    }
};
int main(){
    b obj;
    obj.run();
    obj.sum();
    return 0;
}
