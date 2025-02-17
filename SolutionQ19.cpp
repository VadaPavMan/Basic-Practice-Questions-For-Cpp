#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]), min =arr[0], max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if(arr[i]> max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
        cout<<arr[i]<<" ";
    }

    cout<<"\nMax: "<< max <<endl;
    cout<<"Min: "<< min <<endl;
    return 0;
}
