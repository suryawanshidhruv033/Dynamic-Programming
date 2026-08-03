// class Solution {
// private:
// int solve(int i,vector<int>& nums,int target,vector<vector<int>> &dp){
//     if(target==0) return true;
//     if(i==0){
//         if(nums[0]==target) return true;
//         else return false;
//     }
//     if(dp[i][target]!=-1) return dp[i][target];
//         bool notpick=solve(i-1,nums,target,dp);
//         bool pick=false;
//         if(nums[i]<=target){
//             pick=solve(i-1,nums,target-nums[i],dp);
//         }
//         return dp[i][target]=(pick||notpick);
//     }
// public:
//     bool canPartition(vector<int>& nums) {
//         int n=nums.size();
//         int TotSum=accumulate(nums.begin(),nums.end(),0);
//         if(TotSum%2!=0) return false;
//         int target=TotSum/2;
//         vector<vector<int>> dp(n,vector<int>(target+1,-1));    
//         return solve(n-1,nums,target,dp);
//     }
// };