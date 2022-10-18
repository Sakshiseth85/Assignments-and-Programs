#include<iostream>
using namespace std;
int x=90;
int fun(){
    static int y=78;
    int x=67; 
    extern int g();
    class local{  //local class
    public:
    // int g(){return x;} //----not valid because of local x
    int h(){return y;} //static y
    int k(){return ::x;} //global x is valid
    int p(){return g();} // extern g() is valid
    };
    // cout<<obj.h();
    local obj,obj2;
    obj.h();
}
int main(){
cout<<fun();
}