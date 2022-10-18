#include<iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
class address{
    public:
    int pin;
    string street;
    string house;
    address(){
        cout<<"hello";
        }
};
class customer : public address
{
private:
    string id;
    int count;
    struct person
    {
        string name, ID, address;
        int contact, cash;
    } person[100];
public:
    customer()
    {
        count = 0;
        address();
    }
};
class admin
{

};
int main(){

    customer onj;
    
}

