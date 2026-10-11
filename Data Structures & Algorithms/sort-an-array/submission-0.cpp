class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = n/2 - 1; i >= 0; i--)
        {
            int current = i;
            while (true)
            {
                int largest = current;
                int left = 2 * current + 1;
                int right = 2 * current + 2;
                if (left < n && nums[left] > nums[largest])
                {
                    largest = left;
                }
                if (right < n && nums[right] > nums[largest])
                {
                    largest = right;
                }
                if (largest == current)
                    break;
                swap(nums[current], nums[largest]);
                current = largest;
            }
        }
        for (int i = n - 1; i > 0; i--) {
            swap(nums[0], nums[i]);

            int current = 0;
            int heapSize = i;

            while (true) {
                int largest = current;
                int left = 2 * current + 1;
                int right = 2 * current + 2;

                if (left < heapSize && nums[left] > nums[largest])
                    largest = left;

                if (right < heapSize && nums[right] > nums[largest])
                    largest = right;

                if (largest == current)
                    break;

                swap(nums[current], nums[largest]);
                current = largest;
            }
        }
        return nums;
    }
};