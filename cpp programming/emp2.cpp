#include <iostream>
#include<conio.h>
using namespace std;
//virtual-run time and non virtual- compile time
class base 
{
public:
virtual void start()=0;// pure virtual function 
virtual void stop()=0;
void sum(){
    cout<<"sum";
}
};
class derived :public base
{
public:
void start(){
    cout<<"Derived start"<<endl;
}
void stop(){
    cout<<"Derived stop"<<endl;
}
};
class derived2 : public derived
{
    public:
void start(){
    cout<<"Derived 2 start"<<endl;
}
void stop(){
    cout<<"Derived 2 stop"<<endl;
}
};

int main(){
    // base obj2;- not possible
    base *obj= new derived();//
    obj->start();
    obj->stop();
    obj->sum();

    obj= new derived2();//
    obj->start();
    obj->stop();
    
}

