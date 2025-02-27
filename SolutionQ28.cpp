#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};
    int pos;

    cout<<"Enter the index from were you want to remove: ";
    cin >> pos;

    cout<<"Befor Deletion: ";
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    vec.erase(vec.begin()+ pos);
    cout<<"\nAfter Deletion: ";
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
    return 0;
}
