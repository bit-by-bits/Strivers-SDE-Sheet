class Solution
{
public:
#include <vector>

    void sortColors(vector<int> &nums)
    {

        int str = -1;
        int mid = 0;
        int end = nums.size();

        while (mid < end)
        {

            if (nums[mid] == 2)
            {
                nums[mid] = nums[--end];
                nums[end] = 2;
            }

            else if (nums[mid] == 0)
            {
                nums[mid++] = 1;
                nums[++str] = 0;
            }

            else if (nums[mid] == 1)
            {
                mid++;
            }
        }
    }
};