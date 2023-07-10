#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum4(vector<int>& nums, int target) {

        unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); i++)
        {
            int ans = target - nums[i];
    
            // if map contains complement
            if (umap.find(ans) != umap.end())
            {
                return {umap[ans], i};
            }

            // add visited elements to map
            umap[nums[i]] = i;
        }

        // function must always return a value in all controlled paths
        return {};
    }
};
// map is used because it provides O(1) operations such as insert and lookup (amortized)

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution obj;
    vector<int> result = obj.twoSum4(nums, target);
    // it is better to use << instead of + as plus creates temporary memory for the copied concatted string. Also it doesn't work with mixed types (like below)
    cout <<"["<<result[0]<<","<<result[1]<<"]";
}

// Alternate way for same logic
vector<int> twoSum(vector<int> nums, int target)
{
  unordered_map<int, int> umap;
  for (int i = 0; i < nums.size(); i++)
  {
    umap[nums[i]] = i;
  }

  for (int i = 0; i < nums.size(); i++)
  {
    int required = target - nums[i];
    if (umap.find(required) != umap.end())
    {
      return {i, umap[required]};
    }
  }

  return {};
}

// brute force - O(n^2)
vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }

        // function must always return a value in all controlled paths
        return result;
    }

// did not work because of same element edge case
 vector<int> twoSum2(vector<int>& nums, int target) {

        vector<int> result;
        unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); i++)
        {   
            // map the elements with their original index so it can be found after sorting
            umap[nums[i]] = i;
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            int ans = target - nums[i];
            int ans_index = lower_bound(nums.begin() + i + 1, nums.end(), ans) - nums.begin();

            // if element is not found, lower_bound returns last index (i.e last element + 1);
            if (ans_index == nums.size())
            {
                continue;
            }   
            
            if (nums[ans_index] + nums[i] == target)
            {
                // edge case where both elements are same. (in the umap, the second occurrence will overwrite the first occurrence's index)(this case can also be handled with multimap maybe)
                if (nums[ans_index] == nums[i])
                {
                    result.push_back(umap[nums[i]]);
                    result.push_back(umap[nums[ans_index]] - 1);
                    return result;
                }
                result.push_back(umap[nums[i]]);
                result.push_back(umap[nums[ans_index]]);
                return result;
            }
        }

        // function must always return a value in all controlled paths
        return result;
    }


    // another fail because finding values of same keys requires a for loop so I would've ended up with O(n^2) again.
    vector<int> twoSum3(vector<int>& nums, int target) {

        vector<int> result;
        multimap<int, int> m_map;

        for (int i = 0; i < nums.size(); i++)
        {   
            // map the elements with their original index so it can be found after sorting (use multimap to handle edge case of same elements)
            m_map.insert({nums[i], i});
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            int ans = target - nums[i];
            int ans_index = lower_bound(nums.begin() + i + 1, nums.end(), ans) - nums.begin();

            // if element is not found, lower_bound returns last index (i.e last element + 1);
            if (ans_index == nums.size())
            {
                continue;
            }   
            
            if (nums[ans_index] + nums[i] == target)
            {
                // edge case where both elements are same. (in the umap, the second occurrence will overwrite the first occurrence's index)(this case can also be handled with multimap maybe)
                // if (nums[ans_index] == nums[i])
                // {
                //     result.push_back(umap[nums[i]]);
                //     result.push_back(umap[nums[ans_index]] - 1);
                //     return result;
                // }
                // result.push_back(umap[nums[i]]);
                // result.push_back(umap[nums[ans_index]]);
                // return result;
            }
        }

        // function must always return a value in all controlled paths
        return result;
    }

    // two pointer approach but because of sorting takes o(nlogn). Can be useful for linear time without auxillary space of hash map if the given array is already sorted.
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int a[n];
        //3 2 4
    //sorted arr 2 3 4 //l=0,r=2 check value at l and r and match with the copy of given array element 
     for(int i=0;i<nums.size();i++){
         a[i]=nums[i];
     }
        vector<int>v;
        sort(nums.begin(),nums.end());
               int l=0,r=nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
              
             break;
            }
            else if(nums[l]+nums[r]>target){
                r--;
            }
            else{
                l++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[l]==a[i]){
                v.push_back(i);
            }
            else if(nums[r]==a[i]){
                v.push_back(i);
            }
        }
        
        return v;
    }
