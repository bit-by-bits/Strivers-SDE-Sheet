class Solution
{
public:
#include <vector>

    void nextPermutation(vector<int> &nums)
    {

        int last = -1;
        const int N = nums.size();

        for (int i = N - 1; i > 0; i--)
        {
            if (nums[i - 1] < nums[i])
            {
                last = i - 1;
                break;
            }
        }

        if (last == -1)
        {
            reverse(nums.begin(), nums.end());
        }

        else
        {
            for (int i = N - 1; i > last; i--)
            {
                if (nums[i] > nums[last])
                {
                    swap(nums[i], nums[last]);
                    reverse(nums.begin() + last + 1, nums.end());
                    break;
                }
            }
        }
    }
};