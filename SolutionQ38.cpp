#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(const vector<int> &arr, int target)
{
  int left = 0, right = arr.size() - 1;
  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
      return mid;
    else if (arr[mid] < target)
      left = mid + 1;
    else
      right = mid - 1;
  }

  return -1;
}

int main()
{
  vector<int> arr = {1, 3, 5, 7, 9, 11};
  int target = 7;
  int result = BinarySearch(arr, target);
  if (result != -1)
    cout << "Element found at index " << result << endl;
  else
    cout << "Element not found!" << endl;
  return 0;
}
