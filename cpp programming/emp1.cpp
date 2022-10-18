#include <iostream>
#include<conio.h>
using namespace std;
//virtual-run time and non virtual- compile time
class base 
{
public:
virtual void print(){
    cout<<"hello"<<endl;
}
base(){
    cout<<"Constructor base"<<endl;
}
virtual ~base(){ //virtual destructor 
    cout<<"Destructor base"<<endl;
}
};
class derived :public base
{
public:
void print(){
    cout<<"hello sir"<<endl;
}
derived(){
    cout<<"Constructor derived"<<endl;
}
~derived(){
    cout<<"Destructor derived"<<endl;
}
};
class derived2 : public derived
{
    public:
void print(){
    cout<<"hey"<<endl;
}
derived2(){
    cout<<"Constructor derived 2"<<endl;
}
~derived2(){
    cout<<"Destructor derived 2"<<endl;
}
};

int main(){

    // derived2 obj3;
    
    base *obj= new derived2();
    delete obj;


    // obj= new derived2();//
    // obj->print();

}
