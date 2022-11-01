class Solution
{
    public:
        vector<int> findBall(vector<vector < int>> &grid)
        {

            int n = grid.size();
            int m = grid[0].size();
            vector<int> res;
            for (int j = 0; j < m; j++)
            {
                int row = 0, col = j;
                while (row < n)
                {

                    if (grid[row][col] == 1)
                    {

                        if (col + 1 >= m || grid[row][col + 1] == -1)
                        {
                            res.push_back(-1);
                            break;
                        }
                        else
                        {
                            col++;
                        }
                    }
                    else
                    {
                        if (col - 1 < 0 || grid[row][col-1] == 1)
                        {
                            res.push_back(-1);
                            break;
                        }
                        else
                        {
                            col--;
                        }
                    }
                    row++;
                }
                if (row == n) res.push_back(col);
            }
            return res;
        }
};
