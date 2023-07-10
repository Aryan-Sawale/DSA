#include <bits/stdc++.h>

using namespace std;

#define ll long long


string binarySwitch (string ques)
{
  ll quesLength = ques.size();
  string ans;
  for (ll i = 0; i < quesLength; i++)
  {
    if (i == 0)
    {
      // compare with '0' instead of "0" otherwise gives error: C++ forbids comparison between pointer and integer
      if (ques[i+1] == '0') ans.append("0");
      if (ques[i+1] == '1') ans.append("1");
      continue;
    }

    if (i == quesLength - 1)
    {
      if (ques[i-1] == '0') ans.append("0");
      if (ques[i-1] == '1') ans.append("1");
      continue;
    }

    (ques[i-1] == ques[i+1]) ? ans.append("0") : ans.append("1");
  }

  return ans;
}


int main()
{
  // if surrounding same 0, else 1;
  string ques = "10011010";
  string ans = binarySwitch(ques);
  cout<<"Ans: "<<ans<<"\n";
}