class Solution {
public:
    int GCD(int a, int b) {
        if ( b == 0) {
            cout << a << "," << b << endl;
            return a;
        }
        return GCD(b, a % b);
    }
    int findGCD(vector<int>& nums) {

        /* find the min, max
            if(min==1 || min==0 || min==max) return max
            else call GCD(min,max)
        */
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (auto x : nums) {
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        // cout<<mini<<" "<<maxi<<endl;
        // if (mini == 1 || mini == 0 || mini == maxi)
        //     return maxi;
        int gcd = GCD(mini, maxi);
        return gcd;
    }
};