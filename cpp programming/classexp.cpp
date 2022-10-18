#include<iostream>
using namespace std;
class one{
    int c=12;
    protected:
    int a=10;
    public:
    int b=20;
};
class two : private one
{
public:
//Accessing private of one class in two class
int n;
int set(){
    n=a;
    return n;
}
};
class three:public two{
    public:
   
};
int main(){
    two obj;
    // obj.a;
    cout<<obj.set();
}