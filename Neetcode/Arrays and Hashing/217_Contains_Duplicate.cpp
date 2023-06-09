#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    //pass by reference
    //use same for for (auto& it : vector)
    {
        bool flag = false;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    flag = true;
                }
            }
        }
        return flag;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    Solution obj;
    cout << obj.containsDuplicate(nums);
}

// Time: O(n^2)
// Space: O(1)  


bool containsDuplicate2(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return true;
        }
    }
    return false;
}
// Time: O(nlog(n))
// Space: O(1)  

bool containsDuplicate3(vector<int> &nums)
{
    unordered_map<int, int> umap;

    for (auto& itr : nums)
    {
        umap[itr]++;
        //value of itr.second is initialized to 0 by default when it is accessed without specifying
    }

    for (auto& itr: umap)
    {
        if (itr.second > 1)
        // . operator is when accessing a member directly, -> for accessing member with a pointer. -> is syntatic sugar for (*ptr).member (deferencing the ptr)
        {
            return true;
        }
    }

    return false;
}
// Time: O(n)
// Space: O(n)
// 193ms 71.5 MB

bool containsDuplicate4(vector<int> &nums)
{
    unordered_set<int> s;
    for (auto& itr : nums)
    {
        s.insert(itr);
    }
    
    if (s.size() == nums.size())
    {
        return false;
    }

    return true; 
}
// Time: O(n)
// Space: O(n)
// 160ms 71.5 MB