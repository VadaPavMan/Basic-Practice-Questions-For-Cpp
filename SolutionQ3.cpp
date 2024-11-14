#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <string>
#include <limits>
using namespace std;

class person
{
public:
    int age;
    string name;
};

class student : public person
{
public:
    int roll_number;
    char grade;
};

int main(void)
{
    student boy;
    cout << "Enter the name of student: ";
    getline(cin, boy.name);

    cout << "Enter the age of " << boy.name << ": ";
    cin >> boy.age;

    cout << "Enter the roll number of " << boy.name << ": ";
    cin >> boy.roll_number;

    cout << "Enter the grade " << boy.name << " got: ";
    cin >> boy.grade;

    cout << "\n\nHere's is the details of " << boy.name << ": " << endl;
    cout << "1. Name: " << boy.name << endl;
    cout << "2. Age: " << boy.age << endl;
    cout << "3. Roll Number: " << boy.roll_number << endl;
    cout << "4. Grade: " << boy.grade << endl;
    return 0;
}
