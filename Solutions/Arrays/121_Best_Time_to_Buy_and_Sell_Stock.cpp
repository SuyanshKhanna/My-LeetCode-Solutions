class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int size = prices.size();
        // int output = 0;
        //     for (int i = 0; i < size; i++) {
        //         for (int j = i + 1; j < size; j++) {
        //             if (prices[j] - prices[i] > output && prices[j] -
        //             prices[i]>=0){
        //                 output = prices[j] - prices[i];
        //             }
        //         }
        //     }
        //     // if(output < 0) output = 0;
        //     return output;
        // }

        //     int minIndex =
        //         min_element(prices.begin(), prices.end()) - prices.begin();
        //     if (minIndex == size - 1) {
        //          minIndex =
        //             min_element(prices.begin(), prices.end() - 1) -
        //             prices.begin();
        //         ;
        //     }
        //     int maxValAfterMin =
        //         *max_element(prices.begin() + minIndex , prices.end());
        //     output = maxValAfterMin - prices[minIndex];
        //     if (output < 0)
        //         output = 0;
        //     return output;
        // }
        //             int size = prices.size();
        //             int output = 0;
        //             int maxV =max_element(prices.begin(), prices.end()) -
        //             prices.begin(); for (int i = 0; i < size; i++) {
        //                     if(1+i < size) maxV
        //                     =max_element(prices.begin()+i+1, prices.end()) -
        //                     prices.begin(); if(i>maxV) break;
        //                    output = max(output, prices[maxV] - prices[i]);
        //             }
        //             return output;
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }
        return maxProfit;
    }

};
