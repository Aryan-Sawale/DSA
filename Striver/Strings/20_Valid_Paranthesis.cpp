#include <bits/stdc++.h>

using namespace std;

bool checkVal(string s)
{
  stack<int> st;
  for (int i = 0; i < s.size(); i++)
  {
    if (st.empty() || s[i] == '{' || s[i] == '(' || s[i] == '[')
    {
      st.push(s[i]);
    }
    else if (s[i] == '}')
    {
      if (st.top() != '{')
        return false;
      else
        st.pop();
    }
    else if (s[i] == ']')
    {
      if (st.top() != '[')
        return false;
      else
        st.pop();
    }
    else if (s[i] == ')')
    {
      if (st.top() != '(')
        return false;
      else
        st.pop();
    }
  }

  if (st.empty())
    return true;
  else
    return false;
}

int main()
{
  string s = "([{}])";
}