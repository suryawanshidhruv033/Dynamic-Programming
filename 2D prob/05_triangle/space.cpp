// class Solution {
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//       int n=triangle.size();
//       vector<int> prev(n,INT_MAX);
//       vector<int> curr(n,INT_MAX);
//       for(int j=0;j<n;j++){
//         prev[j]=triangle[n-1][j];
//       }  
//       for(int i=n-2;i>=0;i--){
//         for(int j=i;j>=0;j--){
//             int down=prev[j]+triangle[i][j];
//             int diag=prev[j+1]+triangle[i][j];
//             curr[j] =min(down,diag);
//         }
//         prev=curr;
//       }
//       return prev[0];
//     }
// };