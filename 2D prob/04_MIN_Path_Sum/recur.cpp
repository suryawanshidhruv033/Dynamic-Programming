// class Solution {
// private:
// int solve(int i,int j,vector<vector<int>>& grid){
//     if(i==0 && j==0) return grid[i][j];
//     if(i<0 || j<0) return 1e9;
//     int mini=INT_MAX;
//     int up=solve(i-1,j,grid)+grid[i][j];
//     int left=solve(i,j-1,grid)+grid[i][j];
//     mini=min(up,left);
//     return mini;

// }
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int m=grid.size();
//         int n=grid[0].size();
//         return solve(m-1,n-1,grid);
//     }
// };