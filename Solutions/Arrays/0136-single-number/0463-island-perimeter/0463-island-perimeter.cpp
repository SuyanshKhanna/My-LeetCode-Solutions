class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter =0;
        int row = grid.size();
        int col = grid[0].size();
        int c=0,r=0;
        for( c=0; c<col; c++){
            for( r=0; r<row; r++){
                if(grid[r][c] == 1){
                    perimeter += 4;
                    if(r-1 >= 0 && grid[r-1][c] == 1) perimeter -= 1;
                    if(r+1 < row && grid[r+1][c] == 1) perimeter -= 1;
                    if(c+1<col && grid[r][c+1] ==1) perimeter -=1;
                    if(c-1>=0 && grid[r][c-1] ==1) perimeter -=1;
                }
            }
        }
        return perimeter;
    }

    // brute force, requires DFS and BFS for optimization 
};