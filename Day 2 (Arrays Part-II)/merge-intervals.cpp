class Solution
{
public:
#include <vector>

    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        ans.push_back(intervals.front());

        for (auto x : intervals)
        {
            auto y = ans.back();

            if (y[1] < x[0])
            {
                ans.push_back(x);
            }

            else if (x[1] < y[1])
            {
            }

            else
            {
                ans.back()[1] = x[1];
            }
        }

        return ans;
    }
};