#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void InsertionSort(vector<int> &vec, int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = vec[i];
        int j = i - 1;

        while (j >= 0 && vec[j] > temp)
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = temp;
    }
}

void PrintArray(vector<int> &vec, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {8, 3, 1, 7, 4, 2, 9};
    int k = 3;
    cout << "Original Array: ";
    PrintArray(arr, arr.size());
    InsertionSort(arr, arr.size());
    cout << "K Largest 3 elements are: ";
    for (int i = arr.size() - k; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Sorted Array: ";
    PrintArray(arr, arr.size());
}
