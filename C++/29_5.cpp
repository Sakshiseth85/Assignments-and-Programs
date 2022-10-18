#include <iostream>
using namespace std;
class b;
class a{
    friend class b;
    int a;
};
class b{};
class c:public b{
    void f(a* p){
// p->a=2 // error!!
    }
};
int main(){
    return 0;
}