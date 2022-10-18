#include <iostream>
using namespace std;
class square{
    public:
    int a;
    private:
    square(int a){
          cout<<"area is "<<a*a;
    }
    public:
     static void area1(){
        square obj(4);//creating instance in static function inside the class only , then call the static function 
        cout<<"  hello ";
    }
};
int main(){
     square::area1();
     square::area1();
 
     
    return 0;
}