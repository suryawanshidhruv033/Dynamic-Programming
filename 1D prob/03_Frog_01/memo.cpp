// memoization
// class Solution {
// 	private:
// 	int solve(int idx, vector<int> &height, vector<int> &dp) {
// 		if (idx == 0)
// 			return 0;
// 		if (dp[idx] != -1)
// 			return dp[idx];
// 		int left = solve(idx - 1, height, dp) + abs(height[idx] - height[idx - 1]);		
// 		int right = INT_MAX;
// 		if (idx>1) {
// 			right = solve(idx - 2, height, dp) + abs(height[idx] - height[idx - 2]);
// 		}
// 		return dp[idx] = min(left, right);
// 	}
// 	public:
// 	int minCost(vector<int>& height) {
// 		// Code here
// 		int idx = height.size() - 1;
// 		vector<int> dp(idx + 1, -1);
// 		return solve(idx, height, dp);	
// 	}
// };