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

    void displayname()
    {
        cout <<"Your Name is: "<< name << endl;
    }
};

class work
{
    public:
    string occupation;

    void displayoccupation()
    {
        cout << "Your Occupation: "<< occupation << endl;
    }
};

class employee : public person, public work 
{
    
};

int main()
{
    employee emp1;
    cout <<"Enter the name here: ";
    cin >> emp1.name;

    cout <<"Enter the occupation here: ";
    cin >> emp1.occupation;

    emp1.displayname();
    emp1.displayoccupation();

    return 0; 
}
