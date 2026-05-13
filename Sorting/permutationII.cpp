// QN0.47 PERMUTATION II

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) { // Function to find all unique permutations of the input array
        vector<vector<int>> result;
        sort(nums.begin(), nums.end()); // Sort the input array to handle duplicates
        backtrack(nums, result, 0); // Start backtracking from the first index
        return result;
    }

private:

    void backtrack(vector<int>& nums, vector<vector<int>>& result, int start) { // Helper function for backtracking
        if (start == nums.size()) { // If we have reached the end of the array, add the current permutation to the result
            result.push_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[start]) continue; // Skip duplicates
            swap(nums[start], nums[i]); // Swap the current index with the loop index
            backtrack(nums, result, start + 1); // Recur with the next index
            swap(nums[start], nums[i]); // Backtrack by swapping back
        }
    }
};





int main() {

    vector<int> nums = {1, 1, 4};
    
    Solution solution;
    vector<vector<int>> output = solution.permuteUnique(nums); // Get all unique permutations

    for (const auto& permutation : output) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl; 
    }
    return 0;
}