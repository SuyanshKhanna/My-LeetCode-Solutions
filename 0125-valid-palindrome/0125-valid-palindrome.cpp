class Solution {
public:

    bool isNumAlpha(char ch)
    {
        ch = tolower(ch);
        return (ch >= 97 && ch <=122 ||
                ch >= 48 && ch <= 57);
    }
    bool isPalindrome(string s) {
        int i=0,j=s.size() - 1;
        while(i<=j)
        {
            if(isNumAlpha(s[i]) && isNumAlpha(s[j]) && tolower(s[i]) != tolower(s[j]))
            return false;

            else if(!isNumAlpha(s[i]))
            i++;

            else if(!isNumAlpha(s[j]))
            j--;

            else
            {
                i++;
                j--;
            }

            
        }return true;
    }
};