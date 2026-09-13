class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }
        int H[26] = {0};
        int i;
        for (i = 0; s[i] != '\0'; i++)
        {
            H[s[i]-97]++;
        }
        for (i = 0; t[i] != '\0'; i++)
        {
            H[t[i]-97]--;
            if (H[t[i]-97]<0)
            {
                return false;
            }
        }
        return true;
        
    }
};
