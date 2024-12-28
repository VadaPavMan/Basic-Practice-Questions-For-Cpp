#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>
#include <string>
#include <limits>
#include <conio.h>
#include <cctype>
#include <cmath>
using namespace std;

// Ignore Above Header Files

class person
{
    private:
    string name;
    int age = 50;

    public:

    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    bool isOlderThan(person other)
    {
        return this-> age > other.age;
    }

    void display()
    {
        cout<<"Name: "<< name << ", Age: "<< age << endl;
    }

    string getname()
    {
        return this-> name;
    }
};

int main()
{
    person p1{"Harsh", 21};
    person p2{"Yash", 19};

    p1.display();
    p2.display();

    if(p1.isOlderThan(p2))
    {
        cout<<p1.getname()<<" is Older than "<< p2.getname()<< endl;
    }
    else
    {
        cout<<p2.getname()<<" is Older than "<< p1.getname()<< endl;
    }
    return 0;
}
