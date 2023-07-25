#include <bits/stdc++.h>

using namespace std;

void fibonacci(int num)
{
  if (num < 1) return;
  if (num == 1) 
  {
    cout << 0;
    return;
  }
  int num1 = 0, num2 = 1;
  cout << num1 << " ";
  for (int i = 1; i < num; i++)
  {
    cout << num2 << " ";
    int temp = num2;
    num2 = num1 + num2;
    num1 = temp;
  }
}

int main()
{
  fibonacci(7);
}