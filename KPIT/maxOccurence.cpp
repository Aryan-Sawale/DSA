#include <iostream>
using namespace std;

// Function to count occurrences of digit k in a number
int countOccurrences(int num, int k) {
    int count = 0;
    while (num != 0) {
        if (num % 10 == k) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the digit k: ";
    cin >> k;

    int maxOccurrences = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int occurrences = countOccurrences(arr[i], k);
        if (occurrences > maxOccurrences) {
            maxOccurrences = occurrences;
            maxElement = arr[i];
        }
    }

    cout << "Element with the maximum occurrence of digit " << k << " is: " << maxElement << endl;

    return 0;
}

/*
  num % 10 = last digit (134 % 10 = 4)
  num /= 10 = remove last digit (134 /= 10 = 13)
*/