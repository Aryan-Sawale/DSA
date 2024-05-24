#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is palindrome
bool isPalindrome(int number)
{
    string numString = to_string(number);
    int start = 0;
    int end = numString.length() - 1;
    while (start < end)
    {
        if (numString[start] != numString[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Function to perform the given operations
int findPalindrome(int number)
{
    while (true)
    {
        // Add the number and its reverse
        int sum = number + stoi(string(to_string(number).rbegin(), to_string(number).rend()));

        // Check if the sum is a palindrome
        if (isPalindrome(sum))
        {
            return sum;
        }

        // Continue with the new sum for the next iteration
        number = sum;
    }
}

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int palindromicNumber = findPalindrome(number);
    cout << "Palindromic number: " << palindromicNumber << endl;

    return 0;
}

/*
  to_string(number) => number to string
  stoi(string) => string to number
*/