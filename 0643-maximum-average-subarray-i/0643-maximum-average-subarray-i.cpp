class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int len = nums.size();
        double maxi=INT_MIN;
        double sum=0;
        for(int l=0; l<k; l++){
            sum += nums[l];
        }
        maxi=sum;
        for(int i=k; i<len; i++){
           double newsum= sum-(nums[i-k])+(nums[i]);
           maxi = max(maxi, newsum);
           sum=newsum;
        }
        return maxi/k;
    }
};