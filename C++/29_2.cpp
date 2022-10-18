#include<iostream>
using namespace std;
class classB;
class classA{
    private:
    int a=10;
    friend int sum(classA,classB);
    // public:
    // classA():a(10){}s

};
class classB{
    private:
    int b=20;
    friend int sum(classA,classB);
    // public:
    // classB():b(20){}

};
int sum(classA num,classB num2){

return (num.a+num2.b);
}
int main(){

    classA a;
    classB b;
    cout<<"SUm is "<<sum(a,b);
}