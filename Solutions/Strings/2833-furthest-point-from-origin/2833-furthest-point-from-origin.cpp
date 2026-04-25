class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int x=0;
        int len = moves.size();
        int l=0,r=0;
        int dash=0;
        int dashCount=0;
        int dist=0,maxDist=0;
        for(auto i: moves){
            if(i=='R'){
                r++;
            }
            else if(i=='L'){
                l++;
            }
            else 
                dashCount++;
        }
        if(l>r)
            dash=-1;
        else if(r>=l)
            dash=1;
        cout<<dash<<endl;
        // for(auto i:moves){
        //     if(i=='L')
        //         dist--;
        //     if(i=='R')
        //         dist++;
        //     if(i=='_')
        //         dist += dash;

        //     maxDist = max(maxDist,dist);
        // }
        return abs(r - l) + (len -r-l);
    }
};