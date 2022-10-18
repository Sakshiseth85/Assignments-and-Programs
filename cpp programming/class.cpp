#include <iostream>
using namespace std;

// Default
class Box
{
    int size=39;
public:
    void show()
    {
         int s = size;
        cout << s;
    }
    int width;
    Box()
    {
        width = 60;
        cout << "Box width is " << width << endl;
    }
};

// Parameterized
// Overloading

class Page
{
public:
    int len;
    int wid;
    Page(int L)
    {
        len = L;
        cout << "Lenght of page is " << L << endl;
    }
    Page(int L, int W)
    {
        len = L;
        wid = W;
        cout << "Length of page is " << L << " Width of page is " << W << endl;
    }
};

int main()
{
    Box obj; // calling default constructor
    Page obj1(30);
    Page obj2(24, 25);
    Page obj3[] = {Page(5, 1), Page(5, 2), Page(5, 3)};

    // Array of objects
    Page *arr;
    for (int i = 0; i < 3; i++)
    {
        arr[i] = Page(i);
    }
    Box b1;
    b1.show();
    // b1.show(10);
}