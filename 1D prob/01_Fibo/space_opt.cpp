// Space optimazation in tabulation
// TC=O(N)  SC=(1);



// class Solution {
//   public:
//     int nthFibonacci(int n) {
//         // code here
//         if(n<=1) return n;
//         int prev2=0;
//         int prev =1;     
//         for(int i=2;i<=n;i++){
//             int curr=prev+prev2;
//             prev2=prev;
//             prev=curr;
//         }
//         return prev;
//     }
// };