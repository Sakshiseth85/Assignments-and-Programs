#include<iostream>
#include <string.h>
using namespace std;
void run(int a){
try
{
    if(a>0)
    throw a;
    else
    throw 'a';
}
catch(int x)
{
    cout<<"Catch an interger"<<endl;
}catch(char x){
    cout<<"Catch a charactor"<<endl;
}

}
int main(){
run(0);

}