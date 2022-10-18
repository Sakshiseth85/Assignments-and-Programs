#include<iostream>
using namespace std;
class  base
{
int num=20;
public:
int marks=90;
void out(){
    cout<<"Num is "<<num<<endl;
}

};

class derived : public base
{
  public:
  int total=100;
  void mark(){
    cout<<"I got "<<marks<<endl;
  }
};
class derived2: public derived
{
public:
  void print(){
    cout<<"Total makrs: "<<total<<endl;
    cout<<"I got: "<<marks<<endl;
    out();
  }
};

int main(){
    derived2 obj;
    obj.print();
}