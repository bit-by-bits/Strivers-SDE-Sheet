class Solution
{
public:
#include <vector>

    int maxProfit(vector<int> &prices)
    {

        int earnt = 0;
        int bought = prices[0];

        for (auto x : prices)
        {
            earnt = max(earnt, x - bought);
            bought = min(bought, x);
        }

        return earnt;
    }
};