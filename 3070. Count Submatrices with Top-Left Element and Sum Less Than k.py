class Solution(object):
    def countSubmatrices(self, grid, k):
        """
        :type grid: List[List[int]]
        :type k: int
        :rtype: int
        """

        for i in  range(1,len(grid[0])):
            grid[0][i] = grid[0][i] + grid[0][i-1]

        for i in range(1,len(grid)):
            grid[i][0] = grid[i][0] + grid[i-1][0];

        for i in range(0,len(grid)):
            for j in range(0,len(grid[i])):
                if i == 0 or j == 0 :
                    continue
                grid[i][j] = grid[i][j] + grid[i-1][j] + grid[i][j-1] + grid[i-1][j-1]

        ans  = 0       

        for i in range(0,len(grid)):
            for j in range(0,len(grid)):

                if grid[i][j] <= k:
                    ans = ans + 1
                    
        return ans


        
