#include <iostream>
using namespace std;

class a{
    public:
    int num;
};
class b{
   int s=10;
   int g(){cout<<"Hello";}
    friend int sum(a);
    friend int sum(b);
};
int sum(b obj){
return obj.s+10;
}
int main(){
    b obj;
    cout<<sum(obj);
    // obj.f(); can't access
    return 0;
}