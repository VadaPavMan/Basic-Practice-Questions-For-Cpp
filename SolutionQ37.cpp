#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <conio.h>

using namespace std;

void merge(vector<int> &arr, int l, int m, int r)
{
    vector<int> temp;
    int i = l;
    int j = m + 1;
    while (i <= m && j <= r)
    {
        if (arr[i] >= arr[j])
        {
            temp.push_back(arr[j]);
            j++;
        }
        else
        {
            temp.push_back(arr[i]);
            i++;
        }
    }

    while (i <= m)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= r)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (auto index = 0; index < temp.size(); index++)
    {
        arr[index + l] = temp[index];
    }
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + (r - 1)) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
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
    vector <int> arr = {23, 5, 6, 23,55, 77, 545, 56};
    cout<<"Original Array: "; 
    PrintArray(arr, arr.size());
    mergeSort(arr, 0, arr.size()-1);
    cout<<"Sorted Array: ";
    PrintArray(arr, arr.size());

}
