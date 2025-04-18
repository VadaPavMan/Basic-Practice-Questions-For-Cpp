#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void BubbleSort(vector <int>& arr, int size)
{
    bool isSwap = false;
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(arr[j], arr[j+1]);

                isSwap = true;
                count++;
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
    int size, k;
    cout<<"Enter The Numbers Of 'K' Element You Want: ";
    cin>> k;

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
    BubbleSort(array, array.size());
    cout<<"Largest "<<k<<" K Elements: "<<endl;
    PrintArray(array, k);
    cout<<"Full Sorted Array: "<<endl;
    PrintArray(array, array.size());

    return 0;
}
