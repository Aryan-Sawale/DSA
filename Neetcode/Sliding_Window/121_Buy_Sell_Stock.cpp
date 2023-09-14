#include <bits/stdc++.h>

using namespace std;

int stockBot(vector<int>& prices) 
{
  int size = prices.size();
  int left = 0, right = 1;
  int maxProfit = 0;
  while (right < size)
  {
    maxProfit = max(maxProfit, prices[right] - prices[left]);
    if (prices[right] < prices[left]) left = right;
    right++;
  }

  return maxProfit;
}

int main()
{
  vector<int> prices = {7,1,5,3,6,4};
  cout << stockBot(prices);
}