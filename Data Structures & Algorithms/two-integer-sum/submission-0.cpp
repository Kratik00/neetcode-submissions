class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++)
        {
            int index = target - nums[i];
            if (hash.find(index) != hash.end())
            {
                return {hash[index], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};
