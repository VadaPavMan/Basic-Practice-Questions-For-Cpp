#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <string> name;
    string nameInput;
    int n, pos; 

    cout<<"How many names do you want to add? ";
    cin>> n;

    for(int i= 0; i < n; i++)
    {

        cout<<"Enter name "<<i+1<<" : ";
        cin >> nameInput;

        name.emplace_back(nameInput);
        nameInput ="";
    }

    cout<<"Before insertion: ";
    for(int i= 0; i < name.size(); i++)
    {
        cout<<name[i]<<" ";
    }

    cout<<"\nEnter a name to insert: ";
    cin >> nameInput;

    cout<<"Enter the index to insert "<<nameInput<<": ";
    cin>> pos;

    name.insert(name.begin()+pos, nameInput);
    cout<<"\nAfter insertion: ";
    for(int i= 0; i < name.size(); i++)
    {
        cout<<name[i]<<" ";
    }

    return 0;
}
