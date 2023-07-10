#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) 
{
  int size = s.size();
  int left = 0, right = size - 1;
  while (left  < right)
  {
    while ((left < right) && (!isalnum(s[left])))
    {
      left++;
    }

    while ((left < right) && (!isalnum(s[right])))
    {
      right--;
    }

    if (tolower(s[left]) == tolower(s[right]))
    {
      left++;
      right--;
    }
    else
    {
      return false;
    }
  }

  return true;
}

int main()
{
  string s = "A man, a plan, a canal: Panama";
  cout << isPalindrome(s);
}