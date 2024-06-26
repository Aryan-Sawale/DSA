#include <bits/stdc++.h>

using namespace std;

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) 
{
    sort(arr, arr + (r+1));
    //begin() and end() pointer
    return arr[k-1];
}

int main()
{
    int n = 5;
    int arr[] = {7, 10, 4, 20, 15};
    cout << kthSmallest(arr, 0, 5, 4);
}




/*
Follow the given steps to solve the problem:
    Run quick sort algorithm on the input array
    In this algorithm pick a pivot element and move it to it’s correct position
    Now, if index of pivot is equal to K then return the value, else if the index of pivot is greater than K, then recur for the left subarray, else recur for the right subarray 
    Repeat this process until the element at index K is not found

// C++ code for the above approach

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r);

// This function returns K'th smallest element in arr[l..r]
// using QuickSort based method. ASSUMPTION: ALL ELEMENTS IN
// ARR[] ARE DISTINCT
int kthSmallest(int arr[], int l, int r, int K)
{
	// If k is smaller than number of elements in array
	if (K > 0 && K <= r - l + 1) {

		// Partition the array around last element and get
		// position of pivot element in sorted array
		int pos = partition(arr, l, r);

		// If position is same as k
		if (pos - l == K - 1)
			return arr[pos];
		if (pos - l > K - 1) // If position is more, recur
							// for left subarray
			return kthSmallest(arr, l, pos - 1, K);

		// Else recur for right subarray
		return kthSmallest(arr, pos + 1, r,
						K - pos + l - 1);
	}

	// If k is more than number of elements in array
	return INT_MAX;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Standard partition process of QuickSort(). It considers
// the last element as pivot and moves all smaller element
// to left of it and greater elements to right
int partition(int arr[], int l, int r)
{
	int x = arr[r], i = l;
	for (int j = l; j <= r - 1; j++) {
		if (arr[j] <= x) {
			swap(&arr[i], &arr[j]);
			i++;
		}
	}

	swap(&arr[i], &arr[r]);
	return i;
}

// Driver's code
int main()
{
	int arr[] = { 12, 3, 5, 7, 4, 19, 26 };
	int N = sizeof(arr) / sizeof(arr[0]), K = 3;

	// Function call
	cout << "K'th smallest element is "
		<< kthSmallest(arr, 0, N - 1, K);
	return 0;
}

*/
 