//QNo.451  Sort Characters By Frequency

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

string frequencySort(string s) {

    unordered_map<char, int> freq;

    // Count frequency
    for(char ch : s) {
        freq[ch]++;
    }

    // Store in vector
    vector<pair<char, int>> vec;

    for(auto x : freq) {
        vec.push_back(x);
    }
    // Sort by frequency descending
    sort(vec.begin(), vec.end(),
        [](pair<char,int> a, pair<char,int> b) {
            return a.second > b.second;
        });
    string ans = "";
    // Create final string
    for(auto x : vec) {

        for(int i = 0; i < x.second; i++) {
            ans += x.first;
        }
    }

    return ans;
}

int main() {

    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Sorted String: " << frequencySort(s);

    return 0;
}