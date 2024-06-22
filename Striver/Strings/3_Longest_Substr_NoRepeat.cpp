#include <bits/stdc++.h>

using namespace std;

int longestSubstr(string s)
{
  int maxLen = 0;
  int l = 0;
  unordered_set<char> charSet;

  for (int r = 0; r < s.size(); r++)
  {
    if (charSet.find(s[r]) != charSet.end())
    {
      charSet.erase(s[l]);
      l++;
    }

    charSet.insert(s[r]);
    maxLen = max(maxLen, r - l + 1);
  }

  return maxLen;
}

int main()
{
  string s = "abcabcbb";
  cout << longestSubstr(s);
}