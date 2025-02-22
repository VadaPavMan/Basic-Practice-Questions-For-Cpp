#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> n;

    int input, size;

    cout<<"Enter The Size Of Vector: ";
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        cout <<"Enter The Element: ";
        cin >> input;
        n.push_back(input);
    }

    for(int i = 0; i < size; i++)
    {
        cout << n[i] <<" ";
    }
    return 0;
}
