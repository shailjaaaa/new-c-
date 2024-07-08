#include<iostream>
using namespace std;
class hello
{
    public:
    static int number;
    int i=0;
    hello()
    {
        number++;
        i++;
    }
    void display()
    {
        cout<<"Display function call...."<<i<<endl;
    }
    static void Display()
    {
        cout<<"Static function call....."<<number<<endl;
    }
};
int hello::number=50;
int main()
{
    hello s1;
    s1.display();

    hello s2;
    s2.display();

    hello s3,s4;
    s3.Display();
    
    return 0;
}