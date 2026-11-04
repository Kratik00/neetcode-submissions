class Solution {
public:
    int arrangeCoins(int n) {
        int stairs = 0;
        int steps = 0;
        for (int i = 0; i < n; i++)
        {
            if (steps > n)
                return stairs - 2;
            steps += i;
            stairs++;
        }
    }
};