// class Solution {
// private:
// int solve(int i, int j,vector<vector<int>>& triangle){
//     if(i==triangle.size()-1) return triangle[i][j];
//     int down =solve(i+1,j,triangle)+triangle[i][j];
//     int diag= solve(i+1,j+1,triangle)+triangle[i][j];
//     return min(down,diag);
// }
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         return solve(0,0,triangle);
//     }
// };