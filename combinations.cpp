#include <bits/stdc++.h>
using namespace std;

void makeCombiUtil(vector<vector<int> >& ans,
	vector<int>& tmp, int n, int left, int k)
{
	if (k == 0) {
		ans.push_back(tmp);
		return;
	}

	for (int i = left; i <= n; ++i)
	{
		tmp.push_back(i);
		makeCombiUtil(ans, tmp, n, i + 1, k - 1);

		tmp.pop_back();
	}
}

vector<vector<int> > makeCombi(int n, int k)
{
	vector<vector<int> > ans;
	vector<int> tmp;
	makeCombiUtil(ans, tmp, n, 1, k);
	return ans;
}

int main()
{
    int n, k;
    cin>>n;
    cin>>k;
	vector<vector<int> > ans = makeCombi(n, k);
	for (int i = 0; i < ans.size(); i++) 
    {
        string temp;
		for (int j = 0; j < ans[i].size(); j++)
        {
            temp.append(to_string(ans.at(i).at(j)));
            temp.append(" ");
            //append uses string push_back only accepts char
		}
        temp.erase(temp.find_last_not_of(" \n\r\t")+1);
        cout << temp;
		cout << endl;
	}
}
