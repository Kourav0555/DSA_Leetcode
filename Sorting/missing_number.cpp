// QNO.268 MISSING NUMBER

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) { // Fn to find the  missing number in the  arr
        int n = nums.size();
        int total_sum = n * (n + 1) / 2; // Calculate expected sum of numbers from 0 to n
        int actual_sum = 0;
        for (int num : nums) {
            actual_sum += num; // Calculate the actual sum of the no. in the array
        }
        return total_sum - actual_sum; // The diff will give us the missing number
    }
};
    int main() {
        vector<int> nums = {3, 0, 1}; // Example input array with a missing number
        Solution solution;
        int missing = solution.missingNumber(nums); // Get the missing number
        cout << "The missing number is: " << missing << endl; // Output the missing number
        return 0;
    }