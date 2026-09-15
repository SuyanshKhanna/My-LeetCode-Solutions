class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec2[0]<rec1[2] && rec2[1]<rec1[3]&& (rec1[0]<rec2[2] && rec1[1]<rec2[3])){
            cout<<"true from here";
            return true;
        }
        // else if(rec1[0]<rec2[0] && rec1[1]<rec2[1])
        //     return true;
        return false;
    }
};