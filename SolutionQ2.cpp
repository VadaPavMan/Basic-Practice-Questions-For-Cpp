#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Student
{
    public: 
    string name;
    int age; 
    int totalmarks;
    char grade;

    void studentinfo()
    {
        cout<< "// Details of student with grades. //\n" << endl;
        cout<< "The name of student is: "<< name<< endl;
        cout<< "The age of student is: "<< age<< endl;
        cout<< "Total marks obtained: "<< totalmarks<< endl;
        cout<< "The grade of student is: "<< grade<< "\n" << endl;
    }
};

char gradecalculator(int ran, char grade)
{
    if(ran < 35)
    {
        grade = 'D';
    }
    else if(ran >= 35 && ran < 60)
    {
        grade = 'C';
    }
    else if(ran >= 60 && ran < 80)
    {
        grade = 'B';
    }
    else if(ran >= 80)
    {
        grade = 'A';
    }

    return grade;
}

int main()
{
    int random, size;
    srand(static_cast<unsigned int>(time(0)));

    cout <<"Enter the number of students: ";
    cin >> size; 

    Student starray[size];

    for(int i = 0; i < size; i++)
    {
        random = rand()% 100+1;
        cout<< "Enter the name of student: ";
        cin >> starray[i].name;

        cout<< "Enter the age of student: ";
        cin >> starray[i].age;

        starray[i].totalmarks = random;
        starray[i].grade = gradecalculator(starray[i].totalmarks, starray[i].grade);

        starray[i].studentinfo();
    }
    return 0;
}
