#include <bits/stdc++.h>

using namespace std;

vector<int> countCharsWords(string key)
{ 
  int counter = 0;
  for (int i = 0; i < key.size(); i++)
  {
    if (key[i] == ' ') counter++;
  }

  return {int(key.size()) - counter, counter + 1};
}

int main()
{
  string key = "I love apples. Hello";
  vector<int> ans = countCharsWords(key);
  cout << "chars: " << ans[0] << endl;
  cout << "words: " << ans[1];
}