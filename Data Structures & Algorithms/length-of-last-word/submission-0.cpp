class Solution {
public:
    int lengthOfLastWord(string s) {
        int r = s.size();
        int max = 0;
        for (int i = r - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && max == 0)
            {
                continue;
            }
            else if (s[i] != ' ')
            {
                max++;
            }
            else
            {
                break;
            }
        }
        return max;
    }
};