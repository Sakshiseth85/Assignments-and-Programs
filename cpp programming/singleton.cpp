#include<iostream>
using namespace std;
class abc{
    int n;
    abc(){
        n=30;
        cout<<"Size is "<<n<<endl;
    }
    public:
    static abc run(){
        static abc *a;
        if(a==NULL){
            abc s;
            a= &s;
        }
       else{
        cout<<"Already existed"<<endl;
       }
       return *a;

    }
};
int main(){
    abc ::run();
    abc::run();
     
}
