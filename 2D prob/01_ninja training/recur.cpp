// class Solution {  
// private:
// int solve(int day,int last,vector<vector<int>>& mat){
//             if(day==0){
//             int maxi=0;
//                 for(int i=0;i<=2;i++){
//                     maxi=max(maxi,mat[0][i]);
//                 }
//             }
//             return maxi;
//         }
//         int maxi=0;
//         for(int i=0;i<=2;i++){
//             if(i!=last){
//             int points=mat[day][i]+solve(day-1,i,mat);
//             maxi=max(maxi,points);
//         }
//         }
//         return maxi;
// }  
// public:
//     int maximumPoints(vector<vector<int>>& mat) {
//         int n=mat.size();
        
//         return solve(n-1,3,mat);
//     }
// };