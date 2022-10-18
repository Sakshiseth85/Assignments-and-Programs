#include<iostream>
using namespace std;
class  base
{
public:
int marks=90;
};

class derived : public base
{
  public:
  void mark(){
    cout<<"I got "<<marks<<endl;
  }
};

int main(){
    derived obj;
    obj.mark();
}
