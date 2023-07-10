#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        // base case: if size isnt same then it isnt an anagram
        if (s.size() == t.size())
        {
            unordered_map<char, int> string1_map;
            unordered_map<char, int> string2_map;

            // count number of occurences of each letter in both strings
            for (auto& it : s)
            {
                string1_map[it]++;
            }

            for (auto& it : t)
            {
                string2_map[it]++;
            }

            bool flag = true;
            
            // if number of occurences of each letter in both strings is same then they are anagrams
            for (auto& it : string1_map)
            {
                if (string1_map[it.first] != string2_map[it.first])
                {
                    flag = false;
                }
            }

            return flag;
        }
        else
        {
            return false;
        }
    }
};

// time complexity = O(n)
// space complexity = O(n)


int main() 
{
    string s = "anagram", t = "nagaram";
    Solution obj;
    cout << obj.isAnagram(s, t);
}

// cleaner code
bool isAnagram(string s, string t)
{
  unordered_map<char, int> umap1;
  unordered_map<char, int> umap2;

  if (s.size() != t.size()) return false;

  for (auto& it : s)
  {
    umap1[it]++;
  }

  for (auto& it : t)
  {
    umap2[it]++;
  }

   return umap1 == umap2;
}

// Assuming we only deal with alphabets, we can use a 26 sized frequency array instead
// now time = O(n) and space = O(1)
bool isAnagram2(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        
        vector<int> freq(26, 0);
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;  //converting char to index number using ASCII
            freq[t[i] - 'a']--; 
        }
        
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] != 0) {
                return false;
            }
        }
        
        return true;
    }

// sort and check if both strings are equivalent
// time - O(nlogn) space - O(1)
bool isAnagram(string s, string t) {

    if (s.size() != t.size()) {
        return false;
    }
    
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    return s == t;
}