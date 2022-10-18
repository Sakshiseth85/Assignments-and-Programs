#include<iostream>
using namespace std;
void fun(float){// can use double to remove f 
    cout<<"Data type - float"<<endl;
}
int fun(int){
cout<<"Data type - int"<<endl;
}

//overloading happens with parameter type only not return type
int funk(int a){
cout<<a<<endl;
}
void funk(double a){
cout<<a<<endl;
}
void run(int a,double b){
    cout<<a<<b<<endl;
}
void run(double a,int b){
    cout<<a<<b<<endl;
}

int main(){
   // fun(2.3); error!
   fun(7);
   fun(2.3f); //f for float
   fun(3);
   funk(2);
   funk(9.4);
   run(2,3.4);
   run(3.4,5);
}