// class Solution {
// 	private:
// 	bool solve(int i, vector<int> &arr, int target,	vector<vector<int>> &dp) {
// 		if (target == 0)
// 			return true;
// 		if (i == 0) {
// 			if (arr[0] == target)
// 				return true;
// 			else
// 				return false;
// 		}
// 		if(dp[i][target]!=-1) return dp[i][target];
// 		bool notpick = solve(i - 1, arr, target,dp);	
// 		bool pick = false;
// 		if (arr[i] <= target) {
// 			pick = solve(i - 1, arr, target - arr[i],dp);
// 		}
// 		return dp[i][target]=(pick || notpick);
// 	}
// 	public:
// 	bool isSubsetSum(vector<int>& arr, int sum) {
// 		// code here
// 		int n = arr.size();
// 		vector<vector<int>> dp(n,vector<int>(sum+1,-1));
// 		return solve(n - 1, arr, sum,dp);	
// 	}
// };
