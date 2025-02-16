#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Take Number: ";
    cin >> number;
    int num = 1;
    for (int i = 0; i <= number; i++)
    {
        for(int space = number-i; space > 0; space--)
        {
            cout<<" ";
        }
        for(int prints = 1; prints < i; prints++)
        {
            cout<<prints;
        }
        for(int print = i; print > 0; print--)
        {
            cout<<print;
        }
        cout << endl;
    }
    return 0;
}
