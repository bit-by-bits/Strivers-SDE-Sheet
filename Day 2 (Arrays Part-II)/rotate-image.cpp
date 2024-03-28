class Solution
{
public:
#include <vector>

    void rotate(vector<vector<int>> &matrix)
    {

        const int N = matrix.size();
        for (int k = 0; k < N; k++)
        {

            int i = 0, j = N - 1;
            while (i < j)
            {
                swap(matrix[i++][k], matrix[j--][k]);
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};