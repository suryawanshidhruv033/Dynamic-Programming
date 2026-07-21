// class Solution {
// 	private:
// 	bool solve(int i, vector<int> &arr, int target) {
// 		if (target == 0)
// 			return true;
// 		if (i == 0) {
// 			if (arr[0] == target)
// 				return true;
// 			else
// 				return false;
// 		}
// 		bool notpick = solve(i - 1, arr, target);
		
// 		bool pick = false;
// 		if (arr[i] <= target) {
// 			pick = solve(i - 1, arr, target - arr[i]);
// 		}
// 		return (pick || notpick);
// 	}
// 	public:
// 	bool isSubsetSum(vector<int>& arr, int sum) {
// 		// code here
// 		int n = arr.size();
// 		return solve(n - 1, arr, sum);
// 	}
// };
