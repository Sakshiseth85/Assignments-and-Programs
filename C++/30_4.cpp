#include<iostream>
using namespace std;
int func(){
    class test{
        public:
        void method(){
            cout<<"Local class method called "<<endl;
        }
    };
    test t; //onject made inside function
    t.method();
}
int main(){
    func();
    return 0;
}