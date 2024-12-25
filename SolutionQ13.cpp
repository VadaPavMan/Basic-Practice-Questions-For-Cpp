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

class shape
{

public:
    double area(double radius)
    {
        return M_PI * radius * radius;
    }

    double area(double breadth, double height)
    {
        return 0.5*breadth*height;
    }

    double area(int side)
    {
        return side * side;
    }
};

int main()
{
    double r1 = 5.4, h2 = 8.6, b3 = 5.1;
    int s4 = 4;

    shape shape;
    cout << "The area of circle: "<< shape.area(r1) << endl;
    cout << "The area of triangle: "<< shape.area(b3, h2) << endl;
    cout << "The area of square: "<< shape.area(s4) << endl;
    return 0;
}
