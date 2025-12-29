
// QNO.217  Contains Duplicate


    // Given an integer array nums, return true if any value appears at least twice in the array,
    // and return false if every element is distinct.
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // unordered_set sirf unique values store karta hai
        // isliye duplicate check karne ke liye best hai
        unordered_set<int> seen;

        // array ke har element par iterate kar rahe hain
        for (int num : nums) {

            // agar number pehle se set me present hai
            // matlab duplicate mil gaya
            if (seen.find(num) != seen.end()) {
                return true;
            }

            // agar number pehle nahi tha
            // to usko set me add kar do
            seen.insert(num);
        }

        // agar koi duplicate nahi mila
        return false;
    }
};


int main() {
    Solution obj;

    // test input
    vector<int> nums = {1, 2, 3, 1};

    bool result = obj.containsDuplicate(nums);

    if (result)
        cout << "Duplicate exists" << endl;
    else
        cout << "No duplicate" << endl;

    return 0;
}