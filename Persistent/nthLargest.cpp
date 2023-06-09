#include <bits/stdc++.h>

using namespace std;

int nthLarge(vector<int> vec, int n)
{
  sort(vec.begin(), vec.end(), greater<int>());
  return vec[n-1];
}

int main()
{
  int k, n;
  vector<int> vec1;
  cin>>k>>n;
  for (int i = 0; i < k; i++)
  {
    int ele;
    cin>>ele;
    vec1.push_back(ele);
  }
  vector<int> vec = {11, -1, -4, 12, -6};
  cout<<nthLarge(vec1, 3);
}