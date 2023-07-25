#include <bits/stdc++.h>

using namespace std;

void displayEvenRecursive(const vector<int>& arr, int index) {
  if (index >= arr.size()) {
    return; 
  }
  if (arr[index] % 2 == 0) {
    cout << arr[index] << " ";  
  }
  displayEvenRecursive(arr, index + 1);
}

void displayEvenIterative(const vector<int>& arr) {
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] % 2 == 0) {
      cout << arr[i] << " ";  
    }
  }
}

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  displayEvenRecursive(nums, 0);
  cout << endl;
  displayEvenIterative(nums);
}