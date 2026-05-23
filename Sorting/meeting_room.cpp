//QNO. MEETING ROOM II

#include <iostream>
#include <vector>       
#include <algorithm>
using namespace std;    


class Solution {

public:
    int minMeetingRooms(vector<vector<int>>& intervals) { // Fn to find the minimum no. of meeting rooms required
        if (intervals.empty()) {
            return 0; // If there are no meetings, no rooms are needed
        }
        
        vector<int> start_times; // Vector to store start times of meetings
        vector<int> end_times;   // Vector to store end times of meetings

        for (const auto& interval : intervals) {
            start_times.push_back(interval[0]); // Add start time to the vector
            end_times.push_back(interval[1]);   // Add end time to the vector
        }
        
        sort(start_times.begin(), start_times.end()); 
        sort(end_times.begin(), end_times.end());     
        
        int rooms_needed = 0; // Variable to keep track of rooms needed
        int end_index = 0;    // Index to track the current end time
        
        for (int i = 0; i < start_times.size(); ++i) {
            if (start_times[i] < end_times[end_index]) {
                rooms_needed++; // If a meeting starts before the earliest ending meeting, we need a new room
            } else {
                end_index++; // Move to the next ending meeting
            }
        }
        
        return rooms_needed; // Return the total number of rooms needed
    }
};

int main() {
    vector<vector<int>> intervals = {{0, 30}, {5, 10}, {15, 20}}; // Example input of meeting intervals
    Solution solution;
    int result = solution.minMeetingRooms(intervals); // Get the minimum number of meeting rooms required
    cout << "Minimum number of meeting rooms required: " << result << endl; // Output the result
    return 0;
}
