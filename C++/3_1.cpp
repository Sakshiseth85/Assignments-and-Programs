#include<iostream>
#include <string.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter n "<<endl;
    cin>>n;

    try
    {
        if(n==0){
            throw n;
            //after this ll code 
        }
    }
    catch(float ab)
    {
        cout<<"Float exception catch value: "<<ab;
    }catch(int ab){
        cout<<"Integer catch "<<endl;
    }
    catch(...){
        cout<<"Default execution catch";
    }
    cout<<20/n;

    return 0;
}

