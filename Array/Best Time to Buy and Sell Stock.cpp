 //Q NO.121 Best Time to Buy and Sell Stock

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
\


        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else {
                maxProfit = max(maxProfit, price - minPrice);
                 }
        }
return maxProfit;
    }
};


// time complexity: O(n)
// space complexity: O(1)