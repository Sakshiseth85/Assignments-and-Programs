#include<iostream>
using namespace std;
class {
int val;
public:
void set(int i){
this->val=i;
}
void print(){
    cout<<"Value is "<<this->val<<endl;
}
}obj1,obj3; //object with in the class
//because class nname is not there, we can't make its object in main
int main(){
    obj1.set(10);
    obj1.print();
    obj3.set(40);
    obj3.print();
}