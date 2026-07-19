// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int m=grid.size();
//         int n=grid[0].size();
//         vector<int> prev(n,0);
//         vector<int> curr(n,0);
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 curr[j]=grid[0][0];
//                 if(i==0 &&j==0) continue;
//                 int up=1e9;
//                 int left=1e9;
//                 if(i>0) up=prev[j]+grid[i][j];
//                 if(j>0) left=curr[j-1]+grid[i][j];

//                 curr[j]=min(up,left);

//             }
//             prev=curr;
//         }
//         return prev[n-1];
//     }
// };