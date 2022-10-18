#include <iostream>
using namespace std;
// forward declaration
class ClassB;
class ClassA {
    private:
        int num1;
        friend class ClassB;
    public:
        ClassA() : num1(12) {}
};
class ClassB {
    private:
        int num2;
    public:
        ClassB() : num2(1) {}
    int add() {
        ClassA objectA;
        return objectA.num1 + num2;
    }
};
int main() {
    ClassB obj;
    cout << "Sum: " << obj.add();
    return 0;
}