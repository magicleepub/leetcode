// https://leetcode.com/problems/two-sum/
class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash_table;
    for (int i = 0; i < nums.size(); ++i) {
      auto result = hash_table.find(target - nums[i]);
      if (result != hash_table.end()) {
        return {result->second, i};
      }
      hash_table.insert({nums[i], i});
    }
    return {};
  }
};
