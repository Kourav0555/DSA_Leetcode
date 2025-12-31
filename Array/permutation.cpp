// QNO.1920  Build Array from Permutation

    // Given a zero-based permutation nums (0-indexed), build an array ans of the same length
    // where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
             for (int i = 0; i < n; i++) {
        ans[i] = nums[nums[i]];
        }
        return ans;
    }
};

int main() {
Solution s;
vector<int> nums = {0, 2, 1, 5, 3, 4};

vector<int> result = s.buildArray(nums);

for (int x : result) {
        cout << x << " ";
    }
    return 0;
}
