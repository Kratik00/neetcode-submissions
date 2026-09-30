class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greatest = -1;
        vector<int> ans(arr.size());
        for (int i = arr.size()-1; i >= 0; i--)
        {
            ans[i] = greatest;
            greatest = max(greatest, arr[i]);
        }
        return ans;
    }
};