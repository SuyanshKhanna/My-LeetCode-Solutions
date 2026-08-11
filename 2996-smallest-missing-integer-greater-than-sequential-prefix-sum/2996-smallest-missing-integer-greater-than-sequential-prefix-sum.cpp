class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int len= nums.size();
        unordered_set<int> Set(nums.begin(), nums.end());
        for(int i=1; i<len ; i++){
            if(nums[i]==nums[i-1]+1){
                sum+= nums[i];
                cout<<sum<<" "<<nums[i]<<endl;
            }else{
                break;
            }
        }
        for(auto x : Set){
            if(Set.contains(sum)){
                sum++;
            }
            else
                break;
        }
        return sum;
    }
};