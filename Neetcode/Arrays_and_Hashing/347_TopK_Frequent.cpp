#include <bits/stdc++.h>

using namespace std;

 vector<int> topKFrequent(vector<int>& nums, int k) 
 {
    unordered_map<int, int> umap;
    for (auto& it : nums)
    {
      umap[it]++;
      // cout << it << ": " << umap[it] << endl;
    }      
    
    vector<pair<int, int>> counts(umap.begin(), umap.end());
    sort(counts.begin(), counts.end(), [](const auto& lhs, const auto& rhs) {
      return lhs.second > rhs.second;
    });

    vector<int> results;
    for (int i = 0; i < k; i++)
    {
      // cout << it.first << ": " << it.second << endl;
      results.push_back(counts[i].first);
    }

    return results;
 }

int main()
{
  vector<int> nums = {1,1,1,2,2,3};
  int k = 2;
  vector<int> results = topKFrequent(nums, k);
}

// using priority queue for converting nlogn to nlogk
/*
std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> umap;
    for (const auto& num : nums) {
        umap[num]++;
    }

    // Custom comparator for the priority queue (min heap)
    struct Comparator {
        bool operator()(const std::pair<int, int>& lhs, const std::pair<int, int>& rhs) const {
            return lhs.second > rhs.second;
        }
    };

    // Use priority queue (min heap) to maintain top k elements
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, Comparator> pq;

    for (const auto& entry : umap) {
        pq.push(entry);
        if (pq.size() > k) {
            pq.pop();  // Remove the smallest element if the queue size exceeds k
        }
    }

    // Extract the top k elements from the priority queue
    std::vector<int> results;
    while (!pq.empty()) {
        results.push_back(pq.top().first);
        pq.pop();
    }

    // Reverse the result vector to get the elements in descending order
    std::reverse(results.begin(), results.end());

    return results;
}
*/