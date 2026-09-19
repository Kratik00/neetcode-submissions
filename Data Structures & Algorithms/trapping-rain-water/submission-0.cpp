class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), i; 
        vector<int> leftMax(n), rightMax(n);
        leftMax[0] = height[0];
        rightMax[n-1] = height[n-1];
        int trappedWater = 0;
        for (i = 1; i < n; i++)
        {
            leftMax[i] = max(leftMax[i-1], height[i-1]);
        }
        for (i = n-2; i >= 0; i--)
        {
            rightMax[i] = max(rightMax[i+1], height[i+1]);
        }
        for (i = 0; i < n; i++)
        {
            int trapped = min(rightMax[i], leftMax[i]) - height[i];
            if (trapped > 0)
            {
                trappedWater += trapped;
            }
        }
        return trappedWater;

    }
};
