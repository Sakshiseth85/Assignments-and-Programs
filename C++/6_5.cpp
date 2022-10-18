#include <iostream>
using namespace std;
class  a{
public:
void fun_a(){
cout<<"Func a"<<endl;
}
};

class b{
public:
void fun_b(){
    cout<<"Func b"<<endl;
}
};
int main(){
    b *x=new b();
    a *new_a=reinterpret_cast<a*>(x);
    new_a->fun_a();
    x->fun_b();
    return 0;
}
