#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int key)
{
  bool flag = true;
  int sqrt = pow(key, 1.0/2.0);
  cout << sqrt << endl;
  // optimization as after squareroot, the divisors will repeat. 
  for (int i = 2; i <= sqrt; i++)
  {
    if (key % i == 0)
    {
      flag = false;
    }
  }


  return flag;
}

int main()
{
  cout << checkPrime(64);
  // int n;
  // vector<int> vec;
  // cin >> n;
  // for (int i = 0; i < n; i++)
  // {
  //   int temp;
  //   cin >> temp;
  //   vec.push_back(temp);
  // }

  // for (auto& it : vec)
  // {
  //   cout << it << " ";
  // }
}