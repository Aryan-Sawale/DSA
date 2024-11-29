#include <bits/stdc++.h>

using namespace std;

// O(n) O(1)
int factorial(int key)
{
  int result = key;
  for (int i = key - 1; i >= 1; i--)
  {
    result *= i;
  }

  return result;
  // key * key - 1 * key - 2 ... 1
}

// O(n) O(n) (call stack)
int factorialRecursive(int key)
{
  if (key == 1 || key == 0) // take care of 0 also, if user enters 0
  {
    return 1;
  }

  int result = key * factorialRecursive(key - 1);
  return result;
}

int main()
{
  int key = 5;
  cout << factorialRecursive(key);
}