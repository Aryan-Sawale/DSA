#include <bits/stdc++.h>

using namespace std;

int main()
{
      // Declare the vector
    vector<int> arr = { 1, 2, 3, 4 };

    cout << "Vector Before Update: ";
    for (auto it : arr) {
        cout << it << ' ';
    }
  
    // Traverse using the reference to value
    // and multiply each value by 2
    for (auto it : arr) {
        it *= 2;
    }
  
    cout << "\nVector After Update: ";
    // Print vector elements
    for (auto it : arr) {
        cout << it << ' ';
    }
}