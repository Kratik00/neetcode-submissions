class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> data;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            data[nums[i]]++;
        }
        for (const auto& a: data)
        {
            if (a.second > n/3)
                ans.push_back(a.first);
        }
        return ans;
    }
};