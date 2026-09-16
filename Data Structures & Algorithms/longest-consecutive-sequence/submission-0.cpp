class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        for (int n: nums)
        {
            mp.insert(n);
        }
        int longest = 0;
        int i = 0;
        for (int num: nums)
        {
            if(!mp.count(num-1))
            {
                int current = num;
                int length = 1;
                while (mp.count(current+1))
                {
                    current++;
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
