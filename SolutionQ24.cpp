#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> numbers;
    int n; 
    for(int i= 0; i < 5; i++)
    {
        cout<<"Enter The Integers " <<i+1<<": ";
        cin>> n;
        numbers.push_back(n);
    }

    for(auto i = 0; i < numbers.size(); i++)
    {
        cout<<"After Inserting "<<numbers[i]<<": ";
        for(int j = 0; j <= i; j++)
        {
            cout<<numbers[j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}
