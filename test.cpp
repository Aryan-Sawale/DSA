#include <bits/stdc++.h>

using namespace std;

void print_iters(string word, vector<char> letters, int choice)
{
    int m = 0, n = 0;
    if (choice == 1)
    {
        m = 0;
        n = 4;
    }
    if (choice == 2)
    {
        m = 0;
        n = 2;
    }
    // if (choice == 3)
    //     m = 0;

    // for (auto i = letters.begin(); i < letters.end(); i++)
    // {
    //     word[m] = *i;
    //     Myfile << word << "\n";
    // }

    for (auto i = letters.begin(); i < letters.end(); i++)
    {
        word[m] = *i;
        for (auto j = letters.begin(); j < letters.end(); j++)
        {
            word[n] = *j;
            cout << word << "\n";
        }
    }
}
int main()
{
    vector<char> letters = {'Q', 'W', 'R', 'Y', 'O', 'A', 'F', 'G', 'J', 'K', 'Z', 'X', 'V', 'B'};
    string word1 = "WORAN";
    string word2 = "WOMAR";
    string word3 = "PURGE";

    print_iters(word1, letters, 1);
    cout << "\n\n";
    print_iters(word2, letters, 2);
    cout << "\n\n";
    // print_iters(word3, letters, Myfile, 3);
    // Myfile << "\n\n";
}