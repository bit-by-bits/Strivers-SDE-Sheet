class Solution
{
public:
#include <vector>

    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int str = 0;
        int end = matrix.size() - 1;

        int row = end;

        while (str <= end)
        {

            int mid = str + (end - str) / 2;

            if (matrix[mid][0] == target)
            {
                row = mid;
                break;
            }

            else if (matrix[mid][0] < target)
            {
                row = mid;
                str = mid + 1;
            }

            else
            {
                row = end = mid - 1;
            }
        }

        if (row < 0 || row > matrix.size() - 1)
            return false;

        str = 0;
        end = matrix[row].size() - 1;

        int col = end;

        while (str <= end)
        {

            int mid = str + (end - str) / 2;

            if (matrix[row][mid] == target)
            {
                return true;
            }

            else if (matrix[row][mid] < target)
            {
                col = mid;
                str = mid + 1;
            }

            else
            {
                col = end = mid - 1;
            }
        }

        return false;
    }
};