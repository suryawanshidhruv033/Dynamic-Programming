// class Solution {
// public:
//     bool canPartition(vector<int>& nums) {
//         int n = nums.size();
//         int TotSum = accumulate(nums.begin(), nums.end(), 0);
//         if (TotSum % 2 != 0)
//             return false;
//         int target = TotSum / 2;
//         vector<bool> prev(target+1,false);
//         vector<bool> curr(target+1,false);
//             prev[0] = true;
//             if (nums[0] <= target) {
//                 prev[nums[0]] = true;
//             }  
//             for (int i = 1; i < n; i++) {
//                 curr[0]=true;
//                 for (int t = 1; t <= target; t++) {
//                     bool notpick = prev[t];
//                     bool pick = false;
//                     if (nums[i] <= t) {
//                         pick = prev[t - nums[i]];
//                     }
//                     curr[t] = pick || notpick;
//                 }
//                 prev=curr;
//             }
//             return prev[target];
//         }
//     };