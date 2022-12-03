/* 
* LeetCode Two Sum Problem
* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

* You may assume that each input would have exactly one solution, and you may not use the same element twice.

* You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        for (auto it = nums.begin(); it < nums.end(); it++)
        {
            if (*it >= target) continue;
            auto theOther = find(it + 1, nums.end(), (target - *it));
            if (theOther != nums.end() && *theOther + *it == target)
            {
                result.push_back((it - nums.begin()));
                result.push_back((theOther - nums.begin()));
                return result;
            }
        }
        return result;
    }
};