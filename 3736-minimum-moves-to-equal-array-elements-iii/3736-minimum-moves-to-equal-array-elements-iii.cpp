class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = 0;
        for(auto x: nums){
            maxi = max(maxi,x);
        }
        int moves=0; 
        for(auto x : nums){
            moves += maxi - x;
        }
        return moves;
    }
};