#include<iostream>
using namespace std;

class  abc{
    public:
    int var=30;
   abc(){
        cout<<"abc called"<<endl;
    }
    void print(){
        cout<<"print"<<endl;
    }
};

int main(){
const abc ab;
cout<<ab.var;
// ab.print();
}