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

class rectangle
{
    private:
    int length, width;

    public:
    rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
    }

    void area()
    {
        cout<<"Area of rectangle is: "<< length*width<< endl;
    }
};

int main()
{
    rectangle rec(3,2);
    rec.area();

    return 0;
}
