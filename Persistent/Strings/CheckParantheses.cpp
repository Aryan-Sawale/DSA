#include <bits/stdc++.h>

using namespace std;

bool checkParantheses(string key)
{
  bool flag = true;
  stack<char> brackets;

  for (int i = 0; i < key.size(); i++)
  {
    // edge case: whenever stack is empty, just push otherwise the top() will cause segfaults
    if (brackets.empty())
    {
      brackets.push(key[i]);
      continue;
    }

    if (key[i] == '[' || key[i] == '(' || key[i] == '{')
    {
      brackets.push(key[i]);
    }

    if (key[i] == ']')
    {
      if (brackets.top() == '[')
      {
        brackets.pop();
      }
      else
      {
        flag = false;
        break;
      }
    }

    if (key[i] == ')')
    {
      if (brackets.top() == '(')
      {
        brackets.pop();
      }
      else
      {
        flag = false;
        break;
      }
    }

    if (key[i] == '}')
    {
      if (brackets.top() == '{')
      {
        brackets.pop();
      }
      else
      {
        flag = false;
        break;
      }
    }
  }

  if (!brackets.empty())
  {
    flag = false;
  }

  return flag;
}

int main()
{ 
  string key = "(){}}{";
  cout << checkParantheses(key);
}