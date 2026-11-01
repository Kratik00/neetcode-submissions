class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> data;
        data[0] = 1;
        int prefixSum = 0;
        int count = 0;
        for (int num: nums)
        {
            prefixSum += num;
            int needed = prefixSum - k;
            if (data.find(needed) != data.end())
                count += data[needed];
            data[prefixSum]++;
        }
        return count;

    }
};