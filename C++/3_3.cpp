#include<iostream>
#include <string.h>
using namespace std;
void expfunction(){
try{
    throw 0;
}catch(int i){
    cout<<"In func- wrong i/p "<<i<<endl;
    throw;
}
}
int main(){
    int var=0;
    cout<<"Rethrowing excetion "<<endl;
    try{
        expfunction();
    }
    catch(int c){
        cout<<"IN main- wronf i/p "<<c<<endl;
    }
}
