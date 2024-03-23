class Solution
{
public:
#include <vector>

    int maxSubArray(vector<int> &nums)
    {

        int currSum = 0;
        int maxmSum = 0;

        const int maxm = *max_element(nums.begin(), nums.end());

        if (maxm <= 0)
            return maxm;

        for (auto x : nums)
        {

            currSum += x;
            maxmSum = max(maxmSum, currSum);

            if (currSum <= 0)
            {
                currSum = 0;
            }
        }

        return maxmSum;
    }
};