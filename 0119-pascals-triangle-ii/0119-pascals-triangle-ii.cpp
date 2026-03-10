class Solution {
public:
    vector<int> getRow(int rowIndex) {
       
        vector<vector<int>> pascal(rowIndex + 1);

        pascal[0] = {1};

        for(int i = 1; i <= rowIndex; i++) {
            pascal[i].resize(i + 1);

            for(int j = 0; j <= i; j++) {
                if(j == 0 || j == i)
                    pascal[i][j] = 1;
                else
                    pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }

        return pascal[rowIndex];

    }
};