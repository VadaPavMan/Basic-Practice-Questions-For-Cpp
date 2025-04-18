#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void BubbleSort(vector <int>& arr, int size)
{
    bool isSwap = false;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
    }

    if (isSwap != true)
    {
        cout << "The Array is already sorted." << endl;
    }
}

void PrintArray(vector <int> arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout<<"Enter The Numbers Of Element: ";
    cin>> size;
    vector <int> array;
    for(int i = 0; i < size; i++)
    {
        int num;
        cout<<"Enter The Elements: ";
        cin>> num;
        array.push_back(num);
    }
    BubbleSort(array, array.size());
    PrintArray(array, array.size());

    return 0;
}
