class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_multiset<int> Num1;
        unordered_multiset<int> Num2;
        vector<int> intersection;
        for(auto x : nums1){
            Num1.insert(x);
        }
        for(auto x : nums2){
            Num2.insert(x);
        }
        if(nums1.size()< nums2.size()){
            for(auto x : nums1){
                if(Num2.contains(x)){
                    intersection.push_back(x);
                    auto it = Num2.find(x);
                    if(it != Num2.end())
                        Num2.erase(it);
                }
            }
        } else{
            for(auto x : nums2){
                if(Num1.contains(x)){
                    intersection.push_back(x);
                    auto it = Num1.find(x);
                    if(it != Num1.end())
                        Num1.erase(it);
                }
            }

        }
        return intersection;
    }
};