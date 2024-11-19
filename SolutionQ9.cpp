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

class person
{
    public:
    string name;
    int age;

    void displaypersoninfo()
    {
        cout <<"Name: "<< name << endl;
        cout <<"Age: "<< age << endl;
    }
};

class student: public person
{
    public: 
    int rollnumber;

    void displaystudentinfo()
    {
        cout<<"Roll Number: "<< rollnumber << endl;
    }
};

class graduatestudent: public student
{
    public:
    string specialization;
    void dispalaygraduateinfo()
    {
        cout <<"Graduated from: "<< specialization << endl;
    }
};
int main()
{
    graduatestudent st;
    st.age = 69;
    st.name = "Vadapavman";
    st.rollnumber = 57;
    st.specialization = "BCA";
    st.displaypersoninfo();
    st.displaystudentinfo();
    st.dispalaygraduateinfo();
    return 0;
}
