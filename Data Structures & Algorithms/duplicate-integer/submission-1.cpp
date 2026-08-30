class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> H;
        for (int i = 0; i < nums.size(); i++)
        {
            if (H.find(nums[i])!=H.end())
            {
                return true;
            }
            H.insert(nums[i]);
        }
        return false;
        
    }
};