#include <iostream>
using namespace std;
int x = 20;
void func()
{
    // local class 1
    class test1
    {
    public:
        test1()
        {
            cout << "test1-test1()" << endl;
        }
        void sum(){
            cout<<"sum"<<endl;
        };
    };

    // local class 2
    class test2 :public test1
    {
        // local class can use other local
        // test1 t1;
    public:
        void method()
        {
            cout << "x is " << x << endl;
        }
    };
    test2 t;
    t.method();
}

int main()
{
    func();
    return 0;
}