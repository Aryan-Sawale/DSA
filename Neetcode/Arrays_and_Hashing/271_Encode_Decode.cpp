#include <bits/stdc++.h>

using namespace std;

string encode(vector<string> &strs) 
{
  string coded;
  long long size = strs.size();
  for (int i = 0; i < size; i++)
  {
    if (i == size - 1)
    {
      coded += strs[i];
      continue;
    }

    coded += strs[i] + "\n";
  }
  return coded;
}

// if you don't remember <sstream> etc.
vector<string> decode2(string &str) 
{
  char delimiter = '\n';
  vector<string> decoded;
  string temp;
  int size = str.size();
  for (int i = 0; i < size; i++)
  {
    if (str[i] != '\n')
    {
      if (i == size - 1)
      {
        temp.push_back(str[i]);
        decoded.push_back(temp);
        continue;
      }
      temp.push_back(str[i]);
    }
    else
    {
      decoded.push_back(temp);
      temp = "";
    }
  }
  return decoded;
}


int main()
{
  vector<string> packet = {"lint","code","love","you"};
  string coded = encode(packet);
  cout << coded << endl;
  vector<string> decoded = decode2(coded);
  for (auto& it : decoded)
  {
    cout << it << " ";
  }
}

vector<string> decode(string &str) 
{
  char delimiter = '\n';
  stringstream ss(str);
  vector<string> decoded;
  string temp;
  while (getline(ss, temp, delimiter))
  {
    decoded.push_back(temp) ;
  }

  return decoded;
}