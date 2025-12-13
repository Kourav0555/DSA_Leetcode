#include <iostream>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    int i = 0; // slow pointer

    for (int j = 1; j < n; j++) {
        // When we find a new value (different from nums[i]),
        // advance the slow pointer and copy the new value there.
        if (nums[j] != nums[i]) {
            i++;              // move slow pointer to next write position
            nums[i] = nums[j]; // write the new unique value
        }
        // If nums[j] == nums[i] it's a duplicate and we  skip it.
    }

    // The number of unique elements is last index + 1
    return i + 1; // number of unique elements
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};

    int k = removeDuplicates(nums);

    cout << "Unique count: " << k << "\n";
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
