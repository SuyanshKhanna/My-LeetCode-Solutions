class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
       
        int i=0; 
        int j=nums.size()-1;
        long long sum=0;
        while(i <= j){
            cout<<"hello"<<endl;
            sum -= static_cast<long long>(nums[i])*static_cast<long long>(nums[i]);
            sum += static_cast<long long>(nums[j])*static_cast<long long>(nums[j]);
            if(i==j){
                sum += static_cast<long long>(nums[i])*static_cast<long long>(nums[i]);
            }
            i++;
            j--;
        }
        return sum;
    }
};