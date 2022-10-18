#include<iostream>
using namespace std;
class out{
    
    public:
    int x;
    class inner{
       public:
       static int a;
       static int b;
       int f();
       void g();
    };
};

int out::inner::a=10;
int out::inner::f(){return 0;};
void out::inner::g(){cout<<"hello";};
int out::inner::b=20;
// typedef out::inner outnest;
// int outnest::b=20;
// int outnest::g(){return 0;};

int main(){
    out::inner obj; //Making object in nested
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    obj.g();
}
