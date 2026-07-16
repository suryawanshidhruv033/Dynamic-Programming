// recursion 
// class Solution {
// private:
// int solve(int idx,vector<int> &nums){
//     if(idx==0) return nums[0];
//     if(idx<0) return 0;
//     return max(nums[idx]+ solve(idx-2,nums),solve(idx-1,nums));   *pick=nums[idx]+solve(idx-2,nums)  and 
      //     *notpick=solve(idx-1,nums) 
// }  
// public:
//     int rob(vector<int>& nums) {
//         int idx=nums.size()-1;
//         return solve(idx,nums);
//     }
// };
