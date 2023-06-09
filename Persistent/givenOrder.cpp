#include <bits/stdc++.h>

using namespace std;

vector<int> getUniqueElements(vector<int>& arr) {
    unordered_set<int> uniqueSet;
    vector<int> uniqueElements;

    for (int num : arr) {
        if (uniqueSet.find(num) == uniqueSet.end()) {
            uniqueSet.insert(num);
            uniqueElements.push_back(num);
        }
    }

    return uniqueElements;
}

int main() {
    vector<int> arr = {2, 4, 2, 6, 1, 4, 9, 1, 6};
    vector<int> uniqueElements = getUniqueElements(arr);

    for (int num : uniqueElements) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}