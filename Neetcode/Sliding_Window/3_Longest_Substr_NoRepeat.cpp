#include <bits/stdc++.h>

using namespace std;

int noRepeat(string s)
  {
    int size = s.size();
    int left = 0;
    int maxLen = 0;
    unordered_set<char> uset;
    for(int right = 0; right < size; right++)
    {
      while (uset.find(s[right]) != uset.end())
      {
        uset.erase(s[left]);
        left++;
      }
      uset.insert(s[right]);
      maxLen = max(maxLen, (right - left) + 1);
    }

    return maxLen;
  }

int main()
{
  cout << noRepeat("abcabcbb");
}