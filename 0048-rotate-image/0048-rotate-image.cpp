class Solution {
public:
    void swap(int &a, int &b){
        int temp=a;
        a=b;
        b=temp; 
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(i==j || i>j) continue;
                swap(matrix[i][j], matrix[j][i]);

            }
        }
        for(int i=0; i<n; i++){
            int a=0, b=n-1;
            while(a<b && a!=b){
                swap(matrix[i][a], matrix[i][b]);
                a++;
                b--;
            }
        }

    }
};