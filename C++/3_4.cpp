#include<iostream>
#include<exception>
using namespace std;

struct myexception: public exception{
    const char * what() const throw(){
        return "c++ exception";
    }
};
int main(){
    try
    {
        throw myexception();
    }
    catch(myexception& a)
    {
       std::cout<<"myexception caught "<<endl;
       std::cout<<a.what()<<std::endl;
    }catch(std:: exception& a){
        cout<<"error"<<endl;
    }
    
}