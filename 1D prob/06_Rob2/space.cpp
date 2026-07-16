
// class Solution {
// private:
//     int space(vector<int>& nums) {
//         int n = nums.size();
//         if (n == 1)
//             return nums[0];
//         int prev2 = nums[0];
//         int prev1 = max(nums[0], nums[1]);
//         for (int i = 2; i < n; i++) {
//             int pick = prev2 + nums[i];
//             int notpick = prev1;
//             int curr = max(pick, notpick);
//             prev2 = prev1;
//             prev1 = curr;
//         }
//         return prev1;
//     }

// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();

//         if (n == 1)
//             return nums[0];

//         vector<int> house1;
//         vector<int> house2;

//         for (int i = 0; i < n - 1; i++)
//             house1.push_back(nums[i]);

//         for (int i = 1; i < n; i++)
//             house2.push_back(nums[i]);

//         int ans1 = space(house1);
//         int ans2 = space(house2);

//         return max(ans1, ans2);
//     }
// };