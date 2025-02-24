#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int arr[100], input, n= 0; 
    for(int i = 0; i < 100; i++)
    {
        arr[i] = i+1;
    }

    cout<<"Enter The Number You Want From Array: "; 
    cin >> input;

    while(arr != 0)
    {
        arr[n];
        if(arr[n] == input)
        {
            cout<<"Number Found At The Index: "<< n << endl;
            break;
        }
        n++;
    }
    return 0;
}
