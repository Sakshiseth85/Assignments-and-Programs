#include <iostream>
#include <string.h>
using namespace std;
typedef unsigned char BYTE;
void f(){
    char ch;
    int i=40;
    float f=9.8;
    double db;

    ch=static_cast<char>(i);
    db=static_cast<double>(f);
    i=static_cast<BYTE>(ch);
    cout<<ch<<endl<<db<<endl<<i;
}
int main(){
    f();
}