#include <bits/stdc++.h>

using namespace std;

string reverseStr(string key)
{
  int left = 0, right = key.size() - 1;
  while (left < right)
  {
    char temp = key[left];
    key[left] = key[right];
    key[right] = temp;
    left ++;
    right --;
  }

  return key;
}

string reverseStr2(string key)
{
  stack<char> chars;
  string result = "";

  for (auto& it : key)
  {
    chars.push(it);
  }

  while (!chars.empty())
  {
    char top = chars.top();
    result.push_back(top);
    chars.pop();
  }

  return result;
}

int main()
{
  string key = "I love apples";
  cout << reverseStr2(key);
}