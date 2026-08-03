// class Solution {
// private:
// int solve(int i,vector<int>& nums,int target){
//     if(target==0) return true;
//     if(i==0){
//         if(nums[0]==target) return true;
//         else return false;
//     }
//         bool notpick=solve(i-1,nums,target);
//         bool pick=false;
//         if(nums[i]<=target){
//             pick=solve(i-1,nums,target-nums[i]);
//         }
//         return (pick||notpick);
//     }
// public:
//     bool canPartition(vector<int>& nums) {
//         int n=nums.size();
//         int TotSum=accumulate(nums.begin(),nums.end(),0);
//         if(TotSum%2!=0) return false;
//         int target=TotSum/2;     
//         return solve(n-1,nums,target);
//     }
// };