#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>
#include <string>
#include <limits>
#include <conio.h>
using namespace std;

class ClassA
{
    public:

    void display()
    {
        cout <<"This is the Class A." << endl;
    }
};

class ClassB
{
    public:

    void display()
    {
        cout <<"This is the Class B." << endl; 
    }
};

class ClassC  : public ClassA, public ClassB 
{
    public:
    void display()
    {
        ClassA::display();
        ClassB::display();
    }
};

int main()
{
    ClassC c;
    c.display();

    return 0; 
}
