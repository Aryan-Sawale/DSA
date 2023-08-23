#include <bits/stdc++.h>

using namespace std;

void pat3(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < (n - i); j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void pat4(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << j+1 << " ";
    }
    cout << endl;
  }
}

void pat5(int n)
{
  for (int i = 0; i < (2*n - 1); i++)
  {
    if (i < n)
    {
      for (int j = 0; j <= i; j++)
      {
        cout << "*";
      }
      cout << endl;
    }
    else
    {
      // (9 - row) + 1 => 9 - (row - 1)
      for (int j = 0; j < ((2*n - 1) - i); j++)
      {
        cout << "*";
      }
      cout << endl;
    }
  }
}

void pat6(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < (n - i - 1); j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void pat8(int n)
{
  for (int i = 0; i < n; i++)
  {
    // n - row
    for (int j = 0; j < (n - i - 1); j++)
    {
      cout << " ";
    }
    // 2(row-1) + 1  (0 indexing helped)
    for (int k = 0; k < (2*i + 1); k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void pat28(int n)
{
  for (int i = 0; i < (2*n - 1); i++)
  {
    if (i < n)
    {
      // n - row OR n - col
      for (int j = 0; j < (n - i - 1); j++)
      {
        cout << " ";
      }

      // col = row
      for (int k = 0; k <= i; k++)
      {
        cout << "* ";
      }
      cout << endl;
    }
    else
    {
      // spaces = n - col
      // col = (9 - row) + 1 => 9 - (row - i)
      // spaces = n - (9 - (row - i))
      for (int j = 0; j < (n - ((2*n - 1) - i)); j++)
      {
        cout << " ";
      }
      // 9 - (row - i)
      for (int k = 0; k < ((2*n - 1) - i); k++)
      {
        cout << "* ";
      }
      cout << endl;
    }
  }
}

// for printing numbers using 1-indexing is easier
void pat30(int n) 
{
  for (int i = 1; i <= 5; i++)
  {
    // spaces = n - row
    for (int j = 1; j <= (n - i); j++)
    {
      cout << "  "; //use double space cuz numbers are with spacing
    }
    
    // print row to 1
    for (int k = i; k >= 1; k--)
    {
      cout << k << " ";
    }

    // print 2 to row
    for (int l = 2; l <= i; l++)
    {
      cout << l << " ";
    }

    cout << endl;
  }
}

/*
4 4 4 4 4 4 4  
4 3 3 3 3 3 4   
4 3 2 2 2 3 4   
4 3 2 1 2 3 4   
4 3 2 2 2 3 4   
4 3 3 3 3 3 4   
4 4 4 4 4 4 4   
*/

// easy to understand as min distance from 4 sides at each index
/*
0 0 0 0 0 0 0 
0 1 1 1 1 1 0   
0 1 2 2 2 1 0   
0 1 2 3 2 1 0   
0 1 2 2 2 1 0   
0 1 1 1 1 1 0   
0 0 0 0 0 0 0  
*/
void pat31(int n)
{
  for (int i  = 1; i <= (2*n - 1); i++)
  {
    
    // Distance => left = col - 1, right = (2n-1) - col, top = row - 1, bottom = (2n-1) - row
    // numAtIndex = n - min(left, right, top, bottom)
     for (int j  = 1; j <= (2*n - 1); j++)
     {
        int left = j - 1, right = (2*n - 1) - j;
        int top = i - 1, bottom = (2*n - 1) - i;
        int currentIndex = n - min({left, right, top, bottom});
        cout << currentIndex << " ";
     }
     cout <<endl;
  }
}

int main()
{
  pat31(4);
}

/*
  std::min for multiple elements
  min({left, right, top, bottom})
*/

// void pat28(int n)
// {
//   for (int i = 0; i < (2*n - 1); i++)
//   {
//     if (i < n)
//     {
//       // n - row
//       for (int j = 0; j < (n - i - 1); j++)
//       {
//         cout << " ";
//       }

//       // 2(row-1) + 1  (0 indexing helped)
//       for (int k = 0; k < (2*i + 1); k++)
//       {
//         if (k % 2 == 0)
//         {
//           cout << "*";
//         }
//         else
//         {
//           cout << " ";
//         }
//       }
//       cout << endl;
//     }
//     else
//     {
//       //  4 - (9 - row)
//       for (int j = 0; j < ((n-1) - ((2*n - 1) - (i+1))); j++)
//       {
//         cout << " ";
//       }
//       // 2(9 - row) + 1
//       for (int k = 0; k < (2*((2*n - 1) - (i+1)) + 1); k++)
//       {
//         if (k % 2 == 0)
//         {
//           cout << "*";
//         }
//         else
//         {
//           cout << " ";
//         }
//       }
//       cout << endl;
//     }
//   }
// }