class Solution {
public:
    int distributeCandies(int n, int limit) {
        if(n==limit || limit>n){
            return ((n+2)*(n+1)/2);
        }
        if( 3* limit < n) return 0;
        int total = ((n + 2) * (n + 1)) / 2;

// 1. Subtract cases where 1 kid exceeds limit
int s1 = 0;
if (n - limit >= 1) { 
    s1 = 3 * ((n - limit + 1) * (n - limit)) / 2;
}

// 2. Add back cases where 2 kids exceed limit
int s2 = 0;
if (n - 2 * limit >= 2) { // Need at least 2 items left to choose 2 slots
    s2 = 3 * ((n - 2 * limit) * (n - 2 * limit - 1)) / 2;
}
cout<<total<<" "<<s1<<" "<<s2<<endl;

int ans = total - s1 + s2;
//int ans = (((n+2)*(n+1))/2) - 3*(((n-limit+1)*(n-limit))/2) + 3*(((n-2*limit)*(n-2*limit -1))/2);

        return ans;
    }
};