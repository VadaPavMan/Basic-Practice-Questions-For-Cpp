#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void SelectionSort(vector <int>& arr, int size)
{
    bool isSwap = false;
    for(auto i = 0; i < size-1; i++)
    {
        for(auto j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
                isSwap = true;
            }
        }
    }

    if (!isSwap)
    {
        cout << "The Array is already sorted." << endl;
    }
    
}

void PrintArray(vector <int>& arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int size;

    cout<<"Enter The Number Of Element In Array: ";
    cin>> size;
    vector <int> array;
    for(int i = 0; i < size; i++)
    {
        int num;
        cout<<"Enter The Elements: ";
        cin>> num;
        array.push_back(num);
    }
    PrintArray(array, array.size());
    SelectionSort(array, array.size());
    cout<<"Sorted Array: "<<endl;
    PrintArray(array, array.size());

    return 0;
}
