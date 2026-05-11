//QNO.229 MAJORITY ELEMENT II

#include <iostream>
#include <vector>   
#include <algorithm>
using namespace std;

class Solution {
public:             
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        if (n == 0) return result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; ) {
            int count = 1;
            while (i + count < n && nums[i] == nums[i + count]) {
                count++;
            }
            if (count > n / 3) {
                result.push_back(nums[i]);
            }
            i += count; // Move to the next distinct element
        }

        return result;
    }
};


// Example usage

int main() {
    vector<int> nums = {3, 2, 3};
    
    Solution solution;
    vector<int> output = solution.majorityElement(nums);
    
    for (int num : output) {
        cout << num << " ";
    }
    cout << endl; 
    return 0;
}