#include <bits/stdc++.h>

using namespace std;

string reverseWord(string str)
{
    for (int i = 0, j = str.size() - 1; i < j; i++,j--)
    {
        swap(str[i], str[j]);
    }

    return str;
}

int main()
{
    string str = "Aryan";
    cout << reverseWord(str);
}















void reverseStr(string& str)
{
    int n = str.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

// Function to reverse a string
void reverse(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}

// Function to reverse a string
void reverseStr(string& str, int n, int i)
{
      
  if(n<=i){return;}
//  Swapping the character 
  swap(str[i],str[n]);
  reverseStr(str,n-1,i+1);
  
}

// C++ program to illustrate the
// reversing of a string using 
// reverse() function
void rever()
{
    string str = "geeksforgeeks";
  
    // Reverse str[begin..end]
    reverse(str.begin(), str.end());
  
    cout << str;
}
void reverseWithTemp()
{
  
    string str = "GeeksforGeeks";
    int n = str.length();
    
    // Temporary string to store the reverse
    string rev;
    
    for (int i = n - 1; i >= 0; i--)
        rev.push_back(str[i]);
  
    cout << rev << endl;
}

