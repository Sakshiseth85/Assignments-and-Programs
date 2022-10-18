#include<iostream>
using namespace std;
class classA{
    private:
    int a=10;
    friend int sum(classA);
    // public:
    // classA():a(10){}

};
int sum(classA num){
num.a+=10;
return num.a;
}
int main(){

    classA obj;
    cout<<sum(obj);
    // obj.a=1; // Priavte member not accessible without friend
}