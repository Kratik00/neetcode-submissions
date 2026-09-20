class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length())
        {
            return false;
        }
        vector<int> mp(26, 0);
        vector<int> sc(26, 0);
        for (char i: s1)
        {
            mp[i-'a']++;
        }
        int left = 0;
        for (int i = 0; i < s2.length(); i++)
        {
            sc[s2[i] - 'a']++;
            if (i-left + 1 > s1.length())
            {
                sc[s2[left] - 'a']--; 
                left++;
            }
            if (sc == mp)
            {
                return true;
            }
        }
        return false;;
    }
};
