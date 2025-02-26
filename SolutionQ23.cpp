#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Sample
{

public:
    int age;
    string name;

    Sample(string name, int age) : name(name), age(age) {}

    void display()
    const {
        cout << "The Name: " << name << endl;
        cout << "The Age: " << age << endl;
        cout << endl;
    }
};

int main()
{

    vector<Sample> employee;

    employee.emplace_back("Harsh", 69);
    employee.emplace_back("Jack", 9);
    employee.emplace_back("Varun", 19);
    employee.emplace_back("Yash", 29);

    for (const auto &emp : employee)
    {
        emp.display();
    }

    return 0;
}
