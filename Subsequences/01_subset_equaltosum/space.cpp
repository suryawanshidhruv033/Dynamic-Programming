// class Solution {
// public:
//     bool isSubsetSum(vector<int>& arr, int sum) {
//         int n = arr.size();
//         vector<bool> prev(sum + 1, false);
//         vector<bool> curr(sum + 1, false);
//         prev[0] = true;
//         if (arr[0] <= sum)
//             prev[arr[0]] = true;
//         for (int i = 1; i < n; i++) {
//             curr[0] = true;
//             for (int target = 1; target <= sum; target++) {
//                 bool notPick = prev[target];
//                 bool pick = false;
//                 if (arr[i] <= target)
//                     pick = prev[target - arr[i]];
//                 curr[target] = pick || notPick;
//             }
//             prev = curr;
//         }
//         return prev[sum];
//     }
// };