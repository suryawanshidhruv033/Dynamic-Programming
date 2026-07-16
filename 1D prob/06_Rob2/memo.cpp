// class Solution {

// private:
//     int solve(int n, vector<int>& nums,vector<int>&dp) {
//         if (n == 0)
//             return nums[0];
//         if (n < 0)
//             return 0;
//         if(dp[n]!=-1) return dp[n];
//         return dp[n]=max(nums[n] + solve(n - 2, nums,dp), solve(n - 1, nums,dp));
//     }

// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if (n == 1)
//             return nums[0];

//         vector<int> house1;
//         for (int i = 0; i < n - 1; i++) {
//             house1.push_back(nums[i]);
//         }
//         vector<int> house2;
//         for (int i = 1; i < n; i++) {
//             house2.push_back(nums[i]);
//         }

//         vector<int> dp1(house1.size(),-1);
//         vector<int> dp2(house2.size(),-1);

//         int ans1 = solve(house1.size() - 1, house1,dp1);
//         int ans2 = solve(house2.size() - 1, house2,dp2);
//         return max(ans1, ans2);
//     }
// };