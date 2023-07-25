#include <bits/stdc++.h>

using namespace std;

int* createArray(int size) {
    static int arr[5] = { 1, 2, 3, 4, 5 };
    return arr;
}

int main() {
    int* myArray = createArray(5);
    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }
    // delete[] myArray;  // Remember to deallocate the memory
    return 0;
}