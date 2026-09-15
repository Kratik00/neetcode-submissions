class Solution {
public:

    string encode(vector<string>& strs) {
        string key = "";
        for (string s: strs)
        {
            int a = s.length();
            key += to_string(a) + "#" + s;
        }
        return key;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.length())
        {
            int j = i;
            while (s[j] != '#')
            {
                j++;
            }
            int n = stoi(s.substr(i, j-i));
            j++;
            string str = s.substr(j, n);
            ans.push_back(str);
            i = j + n;
        }
        return ans;
        

    }
};
