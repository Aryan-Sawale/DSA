#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> strings)
{
  unordered_map<string, vector<string>> groups;

  // sort strings to get the same key for each anagram and those strings can be added to corresponding groups. 
  for (int i = 0; i < strings.size(); i++)
  {
    string temp = strings[i];
    sort(temp.begin(), temp.end());
    groups[temp].push_back(strings[i]);
  }

  // add those vector<string> from umap to results vector
  vector<vector<string>> results;
  for (auto& it : groups)
  {
    results.push_back(it.second);
  }

  return results;
}
// O(n^2logn)  (nlogn for sorting * for loop)

int main()
{
  vector<string> strings = {"eat","tea","tan","ate","nat","bat"};
  vector<vector<string>> results = groupAnagrams(strings);
  for (int i = 0; i < results.size(); i++)
  {
    for (int j = 0; j < results[i].size(); j++)
    {
      cout<<results[i][j]<<" ";
    }
    cout<<endl;
  }
}



// My approach: O(n^3)
bool isAnagram(string s, string t)
{
  if (s.size() != t.size()) return false;

  unordered_map<char, int> umap1;
  unordered_map<char, int> umap2;

  for (int i = 0; i < s.size(); i++)
  {
    umap1[s[i]]++;
    umap2[t[i]]++;
  }

  return umap1 == umap2;
}

vector<vector<string>> groupAnagrams2(vector<string> strings)
{
  vector<vector<string>> results;
  vector<int> visited;
  int group = 0;

  for (int i = 0; i < strings.size(); i++)
  {
    // if current index is not in visited array
    if (find(visited.begin(), visited.end(), i) != visited.end()) continue;

    // initalize a new group with empty anonymous vector to prevent segfault
    results.push_back(vector<string>());

    results[group].push_back(strings[i]);
    visited.push_back(i);

    // check for anagrams and add them to current group 
    for (int j = i + 1; j < strings.size(); j++)
    {
      if (find(visited.begin(), visited.end(), j) != visited.end()) continue;

      if (isAnagram(strings[i], strings[j]))
      {
        results[group].push_back(strings[j]);
        visited.push_back(j);
      }
    }

    // switch to next group
    group++;
  }

  return results;
}