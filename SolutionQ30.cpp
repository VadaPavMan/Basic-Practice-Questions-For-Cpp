#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <iostream>

using namespace std;

void linearsearch(const vector <int> &arr, int size, int search)
{
    stack <int> index;
    bool found = false;
    for (auto i = 0; i < size; i++)
    {
        if (search == arr[i])
        {
            cout << "Found The Element " << search << " At Index: " << i << endl;
            found = true;
            index.push(i);
        }
    }

    if(found)
    {
        cout<<"This Are The Indexs: ";
        while(!index.empty())
        {
            cout<<index.top()<<" ";
            index.pop();
        }
    }
    if(!found)
    {
        cout<<"Element Not Found."<<endl;
    }
}

int main()
{
    vector <int> numbers = {10, 20, 30, 20, 40, 20};
    linearsearch(numbers, numbers.size(), 20);
    return 0;
}
