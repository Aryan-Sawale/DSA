#include <bits/stdc++.h>

using namespace std;

bool comparatorVanilla (const pair<int, int>& a, const pair<int, int>& b)
{
  // if equal sort by value in decreasing (leetcode question)
  if (a.second == b.second)
  {
    return a.first > b.first;
  }

  // by default sort by freq
  return a.second < b.second;
}

vector<int> sortFreqVanilla(vector<int> nums)
{
  unordered_map<int, int> umap;

  for (auto& it : nums)
  {
    umap[it]++;
  }

  // make a vector of pairs so that we can sort and use comparator
  // add pairs of all elements from nums with their frequency, so they can be sorted acc to it.
  vector<pair<int, int>> pairs;
  for (auto &it : nums)
  {
    pairs.push_back({it, umap[it]});
  }

  sort(pairs.begin(), pairs.end(), comparatorVanilla);

  vector<int> result;
  for (auto &it : pairs)
  {
    result.push_back(it.first);
  }

  return result;
}

// There is another twist to this question where you should also preserve the order of elements, but I'm not gonna bother

int main()
{
    vector<int> arr = {1,1,2,2,2,3};
    vector<int> sortedArr = sortFreqVanilla(arr);
    
    for (auto& it: sortedArr) {
        cout << it << " ";
    }
    
}