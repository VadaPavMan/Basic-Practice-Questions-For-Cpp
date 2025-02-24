#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int arr[100], max = 0, smax = 0; 
    for(int i = 0; i < 100; i++)
    {
        arr[i] = i+1;
    }

    for(int i : arr)
    {
        if(max < arr[i-1])
        {
            max = arr[i - 1];
        }
    } 

    for(int i : arr)
    {
        if(smax < arr[i-1] && arr[i - 1] != max)
        {
            smax = arr[i - 1];
        }
    }

    cout<<"Max: "<<max<<endl;
    cout<<"Second Max: "<<smax<<endl;
    return 0;
}
