#include <bits/stdc++.h>

using namespace std;

void sort012(int a[], int n)
{
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[a[i]]++;
        //update 0, 1 or 2 keys
    }

    //from 0 to umap[0], update array with 0s
    for (int i = 0; i < umap[0]; i++)
    {
        a[i] = 0;
    }

    //for next umap[1] places, update array with 1s
    for (int i = umap[0]; i < (umap[0] + umap[1]); i++)
    {
        a[i] = 1;
    }

    //for next umap[2] places, update array with 2s
    for (int i = (umap[0] + umap[1]); i < (umap[0] + umap[1] + umap[2]); i++)
    {
        a[i] = 2;
    }
}

int main()
{
    int n = 5;
    int a[] = {0, 2, 1, 2, 0};

    sort012(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

/*
void sort012(int a[], int n)
{
    sort(a, a+n);
}
*/