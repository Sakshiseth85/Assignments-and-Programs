#include<iostream>
using namespace std;
class one{
    public:
    int x=20;
};
class two : public one
{
public:
int y=30;
int sum(){
    cout<<"Sum of x+y: "<<x+y<<endl;
}
};
class three:public one{
    public:
    int z=40;
    int sum2(){
        cout<<"Sum of x+y+z: "<<x+z<<endl;
    }
};
class four: public two, public three{
public:
int w=50;
int sum3(){
    cout<<"sum of x+y+z: "<<two::x+y+z<<endl;
}
};
int main(){
 four obj;
 obj.sum();
 obj.sum2();
 obj.sum3();


}
