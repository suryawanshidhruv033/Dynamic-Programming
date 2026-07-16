// class Solution {
    
//   private:
//   int solve(int day,int last,vector<vector<int>>& mat,vector<vector<int>>&dp){
//             if(day==0){
//               int maxi=0;
//                 for(int i=0;i<=2;i++){
//                   if(i!=last){
//                      maxi=max(maxi,mat[0][i]);
//                 }
//             }
//             return maxi;
//         }
        
//         if(dp[day][last]!=-1) return dp[day][last];
//         int maxi=0;
//         for(int i=0;i<=2;i++){
//             if(i!=last){
//             int points=mat[day][i]+solve(day-1,i,mat,dp);
//             maxi=max(maxi,points);
//         }
//         }
//         return dp[day][last]=maxi;
//     }  
  
 
//   public:
//     int maximumPoints(vector<vector<int>>& mat) {
//         int n=mat.size();
//         vector<vector<int>> dp(n,vector<int>(4,-1));
        
//         return solve(n-1,3,mat,dp);
//     }
// };