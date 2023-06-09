#include <bits/stdc++.h>

using namespace std;

#define ll long long

//find all divisors and connect them
void connect_threads(vector<vector<ll>> &mat, ll num_people)
{
    for (int i = 1; i < (ceil(num_people / 2) + 1); i++)
    {
        for (int j = 1; j < num_people + 1; j++)
        {
            if ((i != j) && (mat[i][j] != 1))
            {
                if ( ((i % j) == 0) || ((j % i) == 0) )
                {   
                    mat[i][j] = mat[j][i] = 1;
                }
            }
        }
    }
}

void print_matrix(vector<vector<ll>> mat, ll num_people)
{
    for (int i = 0; i < num_people; i++)
    {  
        for (int j = 0; j < num_people; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<<"\n";
    }
}

void recur(ll node, vector<vector<ll>> mat, ll num_people, ll &count, ll num_moves, ll &result, ll person)
{
    // base condition
    if (count == 0)
    {
        result++;
        count++;
        return;
    }

    for (int i = 1; i < num_people + 1; i++)
    {
        if(mat[node][i])
        {
            if(i == person)
            {
                result++;
                continue;
            }

            count--;
            recur(i, mat, num_people, count, num_moves, result, person);
        }
    }
    count++;
}

int main()
{
    ll num_people, person, num_moves;
    cout<<"N: ";
    cin>>num_people;
    cout<<"P: ";
    cin>>person;
    cout<<"X: ";
    cin>>num_moves;

    //initializing 2d vector with 0
    vector<vector<ll>> mat((num_people + 1), vector<ll>((num_people + 1), 0));

    ll result = 0;
    ll count = num_moves - 1;
    ll node = person; 

    cout<<"Before connecting: \n";
    print_matrix(mat, num_people);
    connect_threads(mat, num_people);
    cout<<"After connecting: \n";
    print_matrix(mat, num_people);
    
    recur(node, mat, num_people, count, num_moves, result, person);

    cout<<"possible ways: "<<result;
}