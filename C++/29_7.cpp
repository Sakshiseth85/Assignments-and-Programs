#include<iostream>
using namespace std;
int add(int a){
    int b=10;
    return a+b;
}
//
int add(int a,int b=20){
 return a+b;
}
int main(){

    int a=5;
    cout<<add(a,70);
    //error! cout<<add(a);

}