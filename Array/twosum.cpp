#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target){
    unordered_map<int, int> mp; 

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];

// If we have already seen the required number, return the pair
        if (mp.find(need) != mp.end()) {
            return { mp[need], i };
        }
// Store the current number with its index
        mp[nums[i]] = i;
}

    // If nothing found 
    return {};
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the array elements:";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter target sum: ";
    cin >> target;

    vector<int> ans = twoSum(nums, target);

    if (!ans.empty()) {
        cout << "Indices found: " << ans[0] << " and " << ans[1] << endl;
} else {
        cout << "No pair found." << endl;
       }

    return 0;
}
