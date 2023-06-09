//https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int n =  6;
    long long a[] = {3, 2, 1, 56, 10000, 167};
}

pair<long long, long long> getMinMax(long long a[], int n) 
{
    ll min, max;
    min = a[0];
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return make_pair(min, max);
}