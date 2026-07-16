// memoization
// class Solution {
// private:
// int solve(int idx,vector<int> &nums,vector<int> &dp){
//     if(idx==0) return nums[0];
//     if(idx<0) return 0;
//     if(dp[idx]!=-1) return dp[idx];
//     return dp[idx]=max(nums[idx]+solve(idx-2,nums,dp), solve(idx-1,nums,dp));    
// }  
// public:
//     int rob(vector<int>& nums) {
//         int idx=nums.size()-1;
//         vector<int> dp(idx+1,-1);
//         return solve(idx,nums,dp);
//     }
// };