class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (string a: details)
        {
            int age = stoi(a.substr(11, 2));
            if (age > 60)
                count++;
            
        }
        return count;
    }
};