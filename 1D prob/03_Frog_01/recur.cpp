// only recursion;
// class Solution {
// 	private:
// 	int solve(int idx, vector<int> &height) {
// 		if (idx == 0)	return 0;
// 		int left = solve(idx - 1, height) + abs(height[idx] - height[idx - 1]); 
// 	    int right=INT_MAX;
// 	    if (idx>1) {
// 	    right = solve(idx - 2, height) + abs(height[idx] - height[idx - 2]);
// 	}
// 	return min(left,right);
// 	}
// 	public:
// 	int minCost(vector<int>& height) {
// 		// Code here
// 		int idx=height.size()-1;
// 		return solve(idx,height);		
// 	}
// };
