#include <bits/stdc++.h>

using namespace std;

// More efficient implementation with array of size 26
int characterReplacement(string s, int k) {
    vector<int> count(26);
    int left = 0, right = 0;
    int maxCount = 0;
    int result = 0;
    
    while (right < s.size()) {
        count[s[right] - 'A']++;
        maxCount = max(maxCount, count[s[right] - 'A']);
        if (right - left + 1 - maxCount > k) {
            count[s[left] - 'A']--;
            left++;
        }
        result = max(result, right - left + 1);
        right++;
    }
    
    return result;
}

// my implementation
int calcMaxFreq(unordered_map<char, int> umap)
{
  int maxFreq = 0;
  for (auto& it : umap)
  {
    maxFreq = max(maxFreq, it.second);
  }

  return maxFreq;
}

int maxRepeated(string s, int k)
{
  int size = s.size();
  int left = 0, right = 0;
  unordered_map<char, int> umap;
  int maxLen = 0;
  while (right < size)
  {
    umap[s[right]]++;

    while (((right - left + 1) - calcMaxFreq(umap)) > k)
    {
      umap[s[left]]--;
      left += 1;
    } 
    maxLen = max(maxLen, right - left + 1);
    right++;
  }
  
  return maxLen;
}

int main()
{
  string s = "AABABBA";
  int k = 1;
  cout << maxRepeated(s, k);
}