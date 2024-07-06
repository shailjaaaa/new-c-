#include <iostream>
using namespace std;
class Base
{
public:
    // pure virtual function
    virtual void display() = 0;
    // virtual void display()
    //  {
    //      cout<<"Base class display function call";
    //  }
};
class derived : public Base
{
public:
    void display()
    {
        cout << "Derived class display function call";
    }
};
int main()
{
    Base *p;
    derived d;
    p = &d;
    p->display();

    return 0;
}