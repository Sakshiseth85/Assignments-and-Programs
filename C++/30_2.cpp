#include<iostream>
using namespace std;
void f(){
    class local{
        public:
        int f();
        //inline valid
        int g(){return 0;} 
        //static not allowed for local class
        // static int a;
        //nonstatic valid 
        int b; 
    };
    // local::int f(){
    //     cout<<"Hello";
    // }           //error!
}
int main(){

}