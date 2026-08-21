// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int good = 1;
        int bad =n;
        int mid=1;
        while(good<bad){
            mid = good + (bad - good )/2;  
            cout<<"mid: "<<mid<<endl;     
            if(isBadVersion(mid)==true){
                bad = mid;
                cout<<"bad moved"<<endl;
            }
            else{
                good = mid+1;
                cout<<"GOOD moved"<<endl;
            }
        }
        return bad;
    }
};