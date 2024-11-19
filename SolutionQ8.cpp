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

class shape
{
protected:
    double width, height;

public:
    void setdimension(double wid, double hei)
    {
        width = wid;
        height = hei;
    }
};

class rectangle : public shape
{
public:
    double area;
    void calculatearea()
    {
        area = width * height;
        cout << "This is the area: " << area << endl;
    }
};

class cuboid : public rectangle
{
public:
    void calvolume(double depth)
    {
        cout << "Volume of cuboid: " << area * depth << endl;
    }
};

int main()
{
    double depth;
    cout << "Enter the depth: ";
    cin >> depth;

    cuboid dep;
    dep.setdimension(44.2, 22.3);
    dep.calculatearea();
    dep.calvolume(depth);

    return 0;
}
