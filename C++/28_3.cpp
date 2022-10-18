//Inner classes inderitance
#include<iostream>
using namespace std;
class a{
    public:
    int x;
    class b{
        public:
        b(){
            cout<<"Hello sakshi"<<endl;
        }
    };
    class c:public b{
        public:
    c(){
        cout<<"Hello"<<endl;
    }
    void sun(){
        cout<<"sun"<<endl;
    }
    // b z;
    a::b y2;
    c *x;
    //a::c *x2;
};
};
int main(){
    a::c obj;
    // a::b *d=new a::c;


}
