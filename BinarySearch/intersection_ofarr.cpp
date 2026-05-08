//QNO.349 INTERSECTION OF TWO ARRAYS
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;



class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> result;// To store the intersection results

        for (int num : nums2) {
            if (set1.count(num)) {
                result.insert(num);// Insert into result set if it's in set1
            }
        }

        return vector<int>(result.begin(), result.end());// Convert the result set back to a vector and return

    }
};



// Example usage

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    
    Solution solution;
    vector<int> output = solution.intersection(nums1, nums2);
    
    for (int num : output) {
        cout << num << " ";
    }
    cout << endl; 
    return 0;
}
