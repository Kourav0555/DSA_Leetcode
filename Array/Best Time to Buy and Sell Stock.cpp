 //Q NO.121 Best Time to Buy and Sell Stock

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // This will store the minimum stock price
        int minPrice = INT_MAX;

        // This will store the maximum profit we can achieve
        int maxProfit = 0;
\

//loop through each price in the prices array
        for (int price : prices) {

            // Agar current price chhota hai, to buy karne ka better chance
            if (price < minPrice) {
                minPrice = price;

                // Nahi to aaj sell karne par kitna profit milega, wo check kregein
            } else {
                maxProfit = max(maxProfit, price - minPrice);
                 }
        }
return maxProfit;
    }
};


// time complexity: O(n)
// space complexity: O(1)