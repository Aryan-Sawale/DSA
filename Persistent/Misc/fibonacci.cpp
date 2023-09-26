#include <bits/stdc++.h>

using namespace std;

// 0 1 1 2 3 5 8

void printFibonacci(int N)
{
  int n1 = 0;
  int n2 = 1;

  if (N < 1)
  {
    cout << "Invalid number";
    return;
  }
  if (N == 1)
  {
    cout << 0;
    return;
  }
  if (N == 2)
  {
    cout << 0 << " " << 1;
    return;
  }

  cout << n1 << " " << n2 << " ";

  int current = 0;
  for (int i = 3; i <= N; i++)
  {
    current = n1 + n2;
    cout << current << " ";
    n1 = n2;
    n2 = current;
  }

}

int findFibonacci(int N)
{
  if (N <= 1)
  {
    return N;
  }

  int result = findFibonacci(N - 1) + findFibonacci(N - 2);
  return result;
}

int findFibonacciIter(int N)
{
  // TODO: add case N < 0 is invalid
  if (N <= 1)
  {
    return N;
  }

  int n1 = 0, n2 = 1;
  int current;
  for (int i = 2; i <= N; i++)
  {
    current = n1 + n2;
    n1 = n2;
    n2 = current;
  }

  return current;
}

int findFibonacciDP(int N, vector<int> Array)
{
  if (N <= 1)
  {
    return N;
  }

  Array[0] = 0;
  Array[1] = 1;

  if (Array[N] == -1)
  {
    Array[N] = findFibonacciDP(N-1, Array) + findFibonacciDP(N-2, Array);
    return Array[N];
  }
  else
  {
    return Array[N];
  }
}

int main()
{
  int N = 10;
  // printFibonacci(N);
  vector<int> Array(N + 1, -1);
  cout << findFibonacciDP(N, Array);
}