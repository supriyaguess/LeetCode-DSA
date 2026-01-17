// Problem: Two Sum
// Platform: LeetCode
// Link: https://leetcode.com/problems/two-sum/
// Difficulty: Easy
// Approach: Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            int need = target - nums[i];
            if (mp.count(need))
                return {mp[need], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};
int main()
{
    vector<int> arr = {2, 4, 5, 8, 10};
    int target = 15;
    Solution sol;
    vector<int> ans = sol.twoSum(arr, target);
     for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}
