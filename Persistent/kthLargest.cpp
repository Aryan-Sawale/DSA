#include <iostream>
#include <queue>
#include <vector>

int findKthLargest(std::vector<int>& nums, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    for (int num : nums) {
        pq.push(num);
        if (pq.size() > k) {
            pq.pop();
        }
    }

    return pq.top();
}

int main() {
    std::vector<int> nums = {3, 1, 6, 2, 4, 9};
    int k = 3;
    int kthLargest = findKthLargest(nums, k);

    std::cout << "The " << k << "th largest element is: " << kthLargest << std::endl;

    return 0;
}

/*
If I want 3 smallest elements in a PQ, I would insert them one by one in the PQ
and pop the 4th element each time. Because when we insert the 4th element, the 
PQ will have the largest element on top. When we pop it, we will always have the
currently 3 smallest elements in the queue (in descending order).

If I want 3 largest elements in a PQ, I would have to first convert from max heap
(descending) to min heap (ascending). And then follow the same process. Now after each 
4th element insertion, the PQ will have the smallest element on top and when we pop
it we will always have the 3 currently greatest elements in the queue (in ascending order).

We can accomplish the same things in a more straight forward way by sorting but that 
would result in a complexity of O(nlogn) while using the PQ approach results in
a complexity of O(nlogk).
*/