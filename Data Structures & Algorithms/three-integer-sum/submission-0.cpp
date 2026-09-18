class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int target = 0;
        int i;
        sort(nums.begin(), nums.end());
        for (i = 0; i < nums.size(); i++)
        {
            target = nums[i];
            int left = i + 1;
            int right = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            while (left < right)
            {
                if (nums[left] + nums[right] + nums[i] < 0)
                {
                    left++;
                }
                else if (nums[left] + nums[right] + nums[i] > 0)
                {
                    right--;
                }
                else
                {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++, right--;
                    while (left < right && nums[left] == nums[left-1])
                    {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right+1])
                    {
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};
