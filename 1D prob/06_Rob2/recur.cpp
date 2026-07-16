// class Solution {

// private:
//     int solve(int n, vector<int>& nums) {
//         if (n == 0)
//             return nums[0];
//         if (n < 0)
//             return 0;
//         return max(nums[n] + solve(n - 2, nums), solve(n - 1, nums));
//     }

// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if (n == 1)
//             return nums[0];

//         vector<int> house1;
//         for (int i = 0; i < n - 1; i++) {
//             house1.push_back(nums[i]);
//         }
//         vector<int> house2;
//         for (int i = 1; i < n; i++) {
//             house2.push_back(nums[i]);
//         }
//         int ans1 = solve(house1.size() - 1, house1);
//         int ans2 = solve(house2.size() - 1, house2);
//         return max(ans1, ans2);
//     }
// };