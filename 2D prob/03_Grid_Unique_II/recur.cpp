// class Solution {

// private:
//     int explore(int i, int j, vector<vector<int>>& obstacleGrid) {
//         if (i < 0 || j < 0) return 0;
//         if (obstacleGrid[i][j] == 1) return 0;
//         if (i == 0 && j == 0) return 1;
//         int up=explore(i-1,j,obstacleGrid);
//         int left=explore(i,j-1,obstacleGrid);
//     return up+left;
//     }

// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m=obstacleGrid.size();
//         int n=obstacleGrid[0].size();
//         return explore(m-1,n-1,obstacleGrid);
//     }
// };