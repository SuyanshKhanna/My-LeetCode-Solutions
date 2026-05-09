class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> twoD(m,vector<int>(n));
        int len = original.size();
        if(m*n!= len){
          return {};    
        }
        int idx=0;
        for( int i=0; i<m ; i++){
            for( int j=0; j<n ; j++){
                twoD[i][j]= original[idx];
                idx++; 
            }
        }
        return twoD;
    }
};