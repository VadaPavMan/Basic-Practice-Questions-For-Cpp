#include <iostream>
#define PI 3.14159
using namespace std;

class shape
{
protected:
double area;

public:
void DisplayArea()
{
 cout <<"Area: " << area << endl;
}
};

class circle : public shape
{
public:
double radius;
circle (double r)
{
radius = r;
}
void calculateArea()
{
area = PI*radius*radius; 
}
};

int main() {
 double r;
    cout << "Enter a radius: ";
    cin >> r;
    
    circle c(r);
    c.calculateArea();
    c.DisplayArea();
    return 0;
}