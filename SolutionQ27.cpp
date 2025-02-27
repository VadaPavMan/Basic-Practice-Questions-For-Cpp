#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    int n;

    cout << "Enter The Number Of Elements You Want: ";
    cin >> n;

    for(int i= 0; i < n; i++)
    {
        int input;
        cout<<"Enter The "<<i+1<<" Element: ";
        cin >> input;

        vec.push_back(input);
        input = 0;
    }

    vec.pop_back(); 
    cout<<"After Deletion Of Last Element: ";
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
