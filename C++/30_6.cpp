#include <iostream>
using namespace std;
typedef class {
    int val;
    public:
    void set(int i){
 this->val=i;
    }
    void print(){
        cout<<this->val<<endl;
    }
}myclass; //name

// typedef class:myclass{
//     public:
// void sum(){
//     set(100);
//     print();
// }
// }abc;
int main(){
    myclass obj,obj2;
    obj.set(20);
    obj.print();

    obj.set(90);
    obj.print();
    // abc o;
    // o.sum();
    return 0;
}