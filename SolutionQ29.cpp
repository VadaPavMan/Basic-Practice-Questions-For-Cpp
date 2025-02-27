#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> vec;
    int n;
    string names;

    cout<<"Enter the number of elements: ";
    cin>> n;

    for(int i = 0; i < n; i++)
    {
        string name;
        cout<<"Enter the names "<<i+1<<" : ";
        cin >> name; 

        vec.emplace_back(name);

        name ="";
    }

    cout<<"Before Deletion: ";
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" , ";
    }

    cout<<"\nEnter the name you want to delete: ";
    cin >> names;

    auto check = find(vec.begin(), vec.end(), names);
    

    if(check != vec.end())
    {
        int index = distance(vec.begin(), check);
        vec.erase(vec.begin()+index);
    }
    cout<<"\nAfter Deletion: ";
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" , ";
    }
    
    return 0;
}
