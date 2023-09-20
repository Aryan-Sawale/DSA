/*
Create a dictionary or a map to store the values of Roman numerals.

Initialize a variable to store the result, which will be the decimal equivalent of the Roman numeral.

Iterate through the Roman numeral string from left to right.

For each character in the string, compare it with the next character to check if it represents a smaller or equal value than the next character.
- If it does (e.g., 'I' followed by 'V' or 'X'), subtract its value from the result.  (this is for handling char like IX, XL etc.) (https://www.cuemath.com/numbers/roman-numerals-1-to-60/)
- If it doesn't (e.g., 'I' followed by 'I'), add its value to the result.

Continue this process until you've processed all characters in the string.

Return the result, which will be the decimal equivalent of the Roman numeral.
*/

#include <bits/stdc++.h>

using namespace std;

int romanToDecimal(string &str) {
  unordered_map<char, int> umap;
  umap['I'] = 1;
  umap['V'] = 5;
  umap['X'] = 10;
  umap['L'] = 50;
  umap['C'] = 100;
  umap['D'] = 500;
  umap['M'] = 1000;

  int result = 0;
  for (int i = 0; i < str.size(); i++) 
  {

    // edge case where last element would not have str[i+1] for comparison
    if (i == str.size() - 1)
    {
      result += umap[str[i]];
      continue;
    }

    if (umap[str[i]] < umap[str[i+1]])
    {
      result -= umap[str[i]];
    }
    else 
    {
      result += umap[str[i]];
    }
  }

  return result;
}

int main() {
  string romanNumeral = "IV"; // Example input
  int decimalValue = romanToDecimal(romanNumeral);
  cout << "Decimal value: " << decimalValue << endl;
  return 0;
}