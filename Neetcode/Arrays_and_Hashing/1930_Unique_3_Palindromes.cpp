#include <bits/stdc++.h>
// #define ll long long

using namespace std;

// using simple loops and indices (preferred)
int threePals(string s)
{ 
  int size = s.size();
  unordered_set<char> uset(s.begin(), s.end());
  int count = 0;

  for (auto& it : uset)
  {
    int left = -1, right = -1;

    // find first occurrence
    for (int i = 0; i < size; i++)
    {
      if (s[i] == it)
      {
        left = i;
        break;
      }
    }

    // find last occurrence
    for (int i = size - 1; i >= 0; i--)
    {
      if (s[i] == it)
      {
        right = i;
        break;
      }
    }

    // if first and last occurrence are found and they aren't the same position
    if (left != -1 && right != -1 && left < right)
    { 
      // get count of unique elements in between 
      unordered_set<char> temp;
      for (int i = left + 1; i < right; i++)
      {
        temp.insert(s[i]);
      }
      count += temp.size();
    }
  }

  return count;
}

int main()
{
  string s = "bbcbaba";
  cout << threePals(s);
}

// using iterators
int threePals1(string s)
{
  unordered_set<char> uset(s.begin(), s.end());
  int count = 0;
  for (auto& it : uset)
  {
    auto left = find(s.begin(), s.end(), it);
    auto right = find(s.rbegin(), s.rend(), it);
    if (left != s.end() && right != s.rend() && distance(left, right.base()) > 1)
    {
      unordered_set<char> temp(left + 1, right.base() - 1);
      int uniqSize = temp.size();
      count += uniqSize;
    }
  }

  return count;
}

// using string methods
int threePals2(const std::string& s) {
    int count = 0;

    for (char c : s) {
        std::unordered_set<char> temp;

        for (size_t i = s.find(c) + 1; i < s.rfind(c); ++i) {
            temp.insert(s[i]);
        }

        count += temp.size();
    }

    return count;
}