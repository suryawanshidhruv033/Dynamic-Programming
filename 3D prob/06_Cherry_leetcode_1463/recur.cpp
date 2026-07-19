// class Solution {
// private:
//  int solve(int i, int j1 , int j2 , vector<vector<int>>& grid){  
//     int m=grid.size();
//     int n=grid[0].size();
//   if(j1<0 || j1>=n || j2<0 || j2>=n ) return -1e9;
//   if(i==m-1){
//     if(j1==j2) return grid[i][j1];
//     else return grid[i][j1]+grid[i][j2];
//   }
//    int maxi=-1e9;
//    for(int dj1=-1;dj1<=1;dj1++){
//     for(int dj2=-1;dj2<=1;dj2++){
//         if(j1==j2){
//             maxi=max(maxi,grid[i][j1]+solve(i+1,j1+dj1,j2+dj2,grid));
//         }
//         else{
//              maxi=max(maxi,grid[i][j1]+grid[i][j2]+solve(i+1,j1+dj1,j2+dj2,grid));
//         }      
//     }
//    }
//    return maxi;
//  }
// public:
//     int cherryPickup(vector<vector<int>>& grid) {
//        int m=grid.size();
//        int n=grid[0].size();
//         return solve(0,0,n-1,grid);
//     }
// };