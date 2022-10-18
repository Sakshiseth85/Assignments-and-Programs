#include <iostream>
using namespace std;
class a{};
class b:public a{};
void f(a* pt, b* pt1){
    a* pt=static_cast<a*>(pt);
    b* pt1=static_cast<b*>(pt1);

}
int main() {


}