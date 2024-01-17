#include <bits/stdc++.h>

using namespace std;


int main()
{ 
  int age = 4;
  try {
    if (age >= 18)
    {
      cout << "You are allowed";
    }
    else 
    {
      throw age;
    }
  } catch (int err) {
    cout << "Your age is: " << age << ". Ages below 18 are not allowed" << endl;
  }
}