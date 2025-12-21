//Q NO. 283  MOVE ZEROES


#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0; 


        for (int i = 0; i < nums.size(); i++) {
            //if i th element is not zero, then we swap it with jth element
            if (nums[i] != 0) {
                swap(nums[j], nums[i]);
                j++;
            }
        }

    
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12}; //making an dynamic array

    s.moveZeroes(nums); //calling the function

    for (int x : nums) {
        cout << x << " "; // printing each element after moving zeroes to end
    }
    return 0;
}
