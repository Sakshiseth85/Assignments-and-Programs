#include<iostream>
using namespace std;
class one{
    public:
    int mymarks=100;
};
class  two{
   public:
   int yourmarks=90;
};
class  three : public one, public two{
     public:
     void marks(){
        cout<<"My marks: "<<mymarks<<endl;
         cout<<"Your marks: "<<yourmarks<<endl;
     }
};
int main(){

    three obj;
    obj.marks();
}


