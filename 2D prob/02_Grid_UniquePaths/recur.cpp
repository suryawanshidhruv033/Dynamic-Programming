// class Solution {

// private:
// int explore(int i,int j){
//     if(i==0 &&j==0) return 1;
//     if(i<0 ||j <0) return 0;
//     int up=explore(i-1,j);
//     int left=explore(i,j-1);
//     return up+left;
// }
// public:
//     int uniquePaths(int m, int n) {
//         return explore(m-1,n-1);
//     }
// };