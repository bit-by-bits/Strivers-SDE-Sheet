class Solution
{
public:
    void paintAllRow(vector<vector<int>> &matrix, int row, int from, int to)
    {

        for (int i = from; i < to; i++)
        {
            matrix[row][i] = 0;
        }
    }

    void paintAllCol(vector<vector<int>> &matrix, int col, int from, int to)
    {

        for (int i = from; i < to; i++)
        {
            matrix[i][col] = 0;
        }
    }

    void setZeroes(vector<vector<int>> &matrix)
    {

        const int M = matrix.size();
        const int N = matrix[0].size();

        bool paintFirstCol = false;
        bool paintFirstRow = false;

        for (int i = 1; i < M; i++)
        {
            if (matrix[i][0] == 0)
            {
                paintFirstCol = true;
            }
        }

        for (int i = 1; i < N; i++)
        {
            if (matrix[0][i] == 0)
            {
                paintFirstRow = true;
            }
        }

        if (matrix[0][0] == 0)
        {
            paintFirstCol = true;
            paintFirstRow = true;
        }

        for (int i = 1; i < M; i++)
        {
            for (int j = 1; j < N; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = 1; i < M; i++)
        {
            if (matrix[i][0] == 0)
            {
                paintAllRow(matrix, i, 1, N);
            }
        }

        for (int i = 1; i < N; i++)
        {
            if (matrix[0][i] == 0)
            {
                paintAllCol(matrix, i, 1, M);
            }
        }

        if (paintFirstCol)
        {
            paintAllCol(matrix, 0, 0, M);
        }

        if (paintFirstRow)
        {
            paintAllRow(matrix, 0, 0, N);
        }
    }
};