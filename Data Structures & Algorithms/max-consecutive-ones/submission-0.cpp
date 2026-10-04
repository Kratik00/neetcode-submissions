class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxim = 0;
        int count = 0;
        for (int a: nums)
        {
            if (a == 1)
            {
                count++;
                maxim = max(count, maxim);
            }
            else
            {
                count = 0;
            }
        }
        return maxim;
    }
};