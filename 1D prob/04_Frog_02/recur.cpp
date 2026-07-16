// Problem Statement:

// A frog wants to climb a staircase with n steps. Given an integer array heights, where heights[i] contains the height of the ith step, and an integer k. To jump from the ith step to the jth step, the frog requires abs(heights[i] - heights[j]) energy, where abs() denotes the absolute difference. The frog can jump from the ith step to any step in the range [i + 1, i + k], provided it exists. Return the minimum amount of energy required by the frog to go from the 0th step to the (n-1)th step.



// recursion with tc=O(K^N)
// class Solution {
// private:
// int solve(int idx,vector<int> &height,int k){
//     if(idx==0) return 0;
//     int ans=INT_MAX;  
//     for(int i=1;i<=k;i++){
//         if(idx-i>=0){
//             int jump=solve(idx-i,height,k)+abs(height[idx]    -height[idx-i]); 
//             ans=min(jump,ans); 
//         }
//     }
//     return ans;
// }
// public:
//     int minimizeCost(vector<int>& height, int n, int k) {
//         return solve(n-1,height,k);
//     }
// };
