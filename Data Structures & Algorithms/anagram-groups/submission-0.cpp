class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string s: strs)
        {
            int H[26] = {0};
            for (char c: s)
            {
                H[c-97]++;
            }
            string key = "";
            for (int i = 0; i < 26; i++)
            {
                key += to_string(H[i]) + "#";
            }
            mp[key].push_back(s);
        } 
        vector<vector<string>> ans;
        for (auto& pair: mp)
        {
            ans.push_back(pair.second);
        }
        return ans;
        
    }
};
