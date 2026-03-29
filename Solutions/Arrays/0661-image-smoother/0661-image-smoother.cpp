class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int N=0;
        int D=0;
        int r = img.size();
        int c = img[0].size();
        vector<vector<int>> smooth(r, vector<int>(c));
        int i=0,j=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                N+= img[i][j];
                D++;
                if(i-1 >=0&& j-1>=0){
                    N += img[i-1][j-1];
                    D++;
                    //i-1, j-1
                }
                if(i-1 >=0){
                    N += img[i-1][j];
                    D++;
                    //i-1,j
                }
                if(i-1 >=0 && j+1<c){
                    N += img[i-1][j+1];
                    D++;
                    //i-1,j+1
                }
                if(j-1>=0){
                    N += img[i][j-1];
                    D++;
                    //i,j-1
                }
                if(j+1<c){
                    N += img[i][j+1];
                    D++;
                    //i,j+1
                }
                if(i+1<r&& j-1>=0){
                    N += img[i+1][j-1];
                    D++;
                    //i+1,j-1
                }
                if(i+1<r){
                    N += img[i+1][j];
                    D++;
                    //i+1,j
                }
                if(i+1 <r && j+1<c){
                    N += img[i+1][j+1];
                    D++;
                    //i+1,j+1
                }
                smooth[i][j] = N/D;
                N=0;
                D=0;
            }
        }
        return smooth;
    }
};