#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> numbers = {10, 20, 30, 40};
    int num, pos;

    cout<<"Enter a number to insert: ";
    cin >> num;

    cout<<"Enter the index to insert at: ";
    cin >> pos;

    if (pos < 0 || pos > numbers.size()) {
        cout << "Invalid position!" << endl;
        return 1;
    }
    
    cout<<"Before insertion: ";
    for(int i = 0; i < numbers.size(); i++)
    {
        cout<< numbers[i] <<" ";
    }
    
    numbers.insert(numbers.begin() + pos, num);

    cout<<"\nAfter insertion: ";
    for(int i = 0; i < numbers.size(); i++)
    {
        cout<< numbers[i] <<" ";
    }
    return 0;
}
