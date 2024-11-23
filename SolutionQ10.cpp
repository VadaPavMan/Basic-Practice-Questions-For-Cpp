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

class thisisclass
{
    public:
    int age;
    string name;
    double gpa;

    thisisclass(int age1, double gpa1, string name1)
    {
        cout <<"Before the change: Name - "<< name1 <<" \nAge - "<<age1 <<"\nGPA - "<< gpa1<< endl;
        cout <<"\nThis is the constructor dont know how to use it lol \nNow Enter the Name here: ";
        cin >> name1;
        name = name1;

        cout<<"Enter the Age: ";
        cin>> age1;
        age = age1;

        cout <<"Enter the GPA: ";
        cin>> gpa1;
        gpa = gpa1;
    }
};

int main()
{
    int age1; double gpa1; string name1;
    cout <<"Enter the name: ";
    getline(cin, name1);

    cout<<"Enter the age: ";
    cin >> age1;

    cout <<"Enter the GPA: ";
    cin >> gpa1;

    thisisclass student(age1, gpa1, name1);

    cout<<"Name: "<< student.name<< endl;
    cout<<"Age: "<< student.age<< endl;
    cout<<"GPA: "<< student.gpa<< endl;
    return 0; 
}
