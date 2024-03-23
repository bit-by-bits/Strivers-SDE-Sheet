class Solution
{
public:
#include <vector>

    vector<vector<int>> generate(int numRows)
    {

        vector<vector<int>> triangle;
        triangle.push_back({1});

        for (int i = 1; i < numRows; i++)
        {

            triangle.push_back({1});

            for (int j = 0; j < triangle[i - 1].size() - 1; j++)
                triangle[i].push_back(triangle[i - 1][j] + triangle[i - 1][j + 1]);

            triangle[i].push_back(1);
        }

        return triangle;
    }
};