// tabulation Time Complexity: O(n × k) Space Complexity: O(n)
// class Solution {
// public:
//     int minimizeCost(vector<int>& height, int n, int k) {
//     vector<int> dp(n,0);
//     dp[0]=0;
//     for(int i =1; i<n;i++){
//         int ans=INT_MAX;
//         for(int j=1;j<=k;j++){
//         if(i-j>=0){
//             int jump=dp[i-j]+abs(height[i]-height[i-j]);
//             ans=min(ans,jump);
//         }
//     }
//     dp[i]=ans;
//     }
//     return dp[n-1];
//     }
// };