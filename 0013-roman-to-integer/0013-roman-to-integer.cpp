class Solution {
public:
    int romanToInt(string s) {
        int integer =0;
        
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] == 'I'){
                integer += 1;
            }
            else if(s[i] == 'V'){
                if(i > 0 && s[i-1] == 'I'){
                    integer += 4;
                    i--;
                }
                else{
                integer += 5;
                }
            }
            else if(s[i] == 'X'){
                if(i > 0 && s[i-1] == 'I'){
                    integer += 9;
                    i--;
                }
                else{
                integer += 10;
                }
            }
            else if(s[i] == 'L'){
                if(i > 0 && s[i-1] == 'X'){
                    integer += 40;
                    i--;
                }
                else{
                integer += 50;
                }
            }
            else if(s[i] == 'C'){
                if(i > 0 && s[i-1] == 'X'){
                    integer += 90;
                    i--;
                }
                else{
                integer += 100;
                }
            }
            else if(s[i] == 'D'){
                if(i > 0 && s[i-1] == 'C'){
                    integer += 400;
                    i--;
                }
                else{
                integer += 500;
                }
            }
            else if(s[i] == 'M'){
                if(i > 0 && s[i-1] == 'C'){
                    integer += 900;
                    i--;
                }
                else{
                integer += 1000;
                }
            }
            
        }
        return integer;
    }
};