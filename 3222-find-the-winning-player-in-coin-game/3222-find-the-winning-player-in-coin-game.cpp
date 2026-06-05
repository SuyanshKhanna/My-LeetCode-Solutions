class Solution {
public:
    string winningPlayer(int x, int y) {
            int Alice=0;
            int Bob=0;
        while(x>0 && y>=4){
        
            if(x>0 && y>=4){
                Alice +=1 ;
                x--;
                y -=4;
            }
            if(x>0 && y>=4){
                Bob += 1;
                x--;
                y -=4;
            }
        }
            if(Alice > Bob)
                return "Alice";
            return "Bob";
        

    }
};