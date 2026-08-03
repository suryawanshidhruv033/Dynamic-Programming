// class Solution {
// public:
//     bool canPartition(vector<int>& nums) {
//         int n = nums.size();
//         int TotSum = accumulate(nums.begin(), nums.end(), 0);
//         if (TotSum % 2 != 0)
//             return false;
//         int target = TotSum / 2;
//         vector<vector<int>> dp(n, vector<int>(target + 1, false));
//         for (int i = 0; i < n; i++) {
//             dp[i][0] = true;
//         }
//             if (nums[0] <= target) {
//                 dp[0][nums[0]] = true;
//             }
//             for (int i = 1; i < n; i++) {
//                 for (int t = 1; t <= target; t++) {
//                     bool notpick = dp[i - 1][t];
//                     bool pick = false;
//                     if (nums[i] <= t) {
//                         pick = dp[i - 1][t - nums[i]];
//                     }
//                     dp[i][t] = pick || notpick;
//                 }
//             }
//             return dp[n - 1][target];
//         }
//     };