#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> &arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    vector <int> arr;

    int size, number;
    cout <<"Enter the size of vector: ";
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter the number: ";
        cin >> number;
        arr.push_back(number);
    }

    display(arr);
    return 0;
}
