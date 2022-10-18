#include <iostream>
#include<conio.h>
using namespace std;
struct a{
     virtual void f(){
        cout<<"Class a"<<endl;
    }
};
struct b:a{
     virtual void f(){
        cout<<"Class b"<<endl;
    }
};
void g(a& arg){
    arg.f();
}
int main(){
    b obj;
    g(obj);
    a obj2;
    g(obj2);
}

