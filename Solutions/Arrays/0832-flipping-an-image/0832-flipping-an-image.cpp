class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int r = image.size();
        int c = image[0].size();
        for(int i=0; i<r; i++){
            int f=0;
            int b = c-1;
            while(f<=b ){
                int temp = image[i][f];
                image[i][f] = image[i][b];
                image[i][b] = temp;
                //flipped
                if(image[i][f]==0) image[i][f]= 1;
                else
                     image[i][f] = 0;
                if(image[i][b]==0) image[i][b]= 1;
                else 
                    image[i][b] = 0;
                f++;
                b--;
                //inverted 
            }
            f--;
            b++;
            if(f<c && f==b){
                if(image[i][f]==0) image[i][f]= 1;
                else image[i][f] = 0;
            }
        }
        return image;
    }
};