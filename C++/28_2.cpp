//Outer classes inderitance
#include <iostream>
using namespace std;
//***
class one
{
public:
    virtual void print() = 0;
};
void callprint(one &p)
{
    p.print();
}
//***
class two
{
public:
    virtual void print1() = 0;
};
void callprint1(two &p)
{
    p.print1();
}
//*** outer class
class outer
{
    string name;
    class inner1;
    friend class outer::inner1;
    class inner1 : public one
    {
        outer *parent;
        public:
        inner1(outer *p) : parent(p) {}
        void print()
        {
            cout << "Print called for " << parent->name << endl; // access data in outer class object
        }
    } inner1;
    class inner2;
    friend class outer::inner2;
    class inner2 : public two
    {
        outer *parent;

    public:
        inner2(outer *p) : parent(p) {}
        void print1()
        {
            cout << "Print1 is called for " << parent->name << endl;
        }

    } inner2;
    public:
    outer(const string& nm)
    :name(nm), inner1(this),inner2(this){}
    operator one&(){return inner1;}; 
    operator two&(){return inner2;};
};


int main(){
    outer x("Sakshi");
    callprint(x);
    callprint1(x);
}
