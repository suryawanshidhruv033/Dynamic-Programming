// memoization  with Time Complexity: O(n × k) ,Space Complexity: O(n) + O(n) (DP array + recursion stack)
// class Solution {
// private:
// int solve(int idx,vector<int> &height,int k,vector<int> &dp){
//     if(idx==0) return 0;
//     int ans=INT_MAX;
//     if(dp[idx]!=-1) return dp[idx];
//     for(int i=1;i<=k;i++){
//         if(idx-i>=0){
//         int jump=solve(idx-i,height,k,dp)+abs(height[idx]-height[idx-i]);
//         ans=min(ans,jump);
//         }
//     }
//     return dp[idx]=ans;
// }
// public:
//     int minimizeCost(vector<int>& height, int n, int k) {
//         vector<int> dp(n,-1);
//         return solve(n-1,height,k,dp);
//     }
// };