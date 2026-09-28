//Leetcode Q14
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0];  // assume first string as prefix

    for (int i = 1; i < strs.size(); i++) {
        // Compare prefix with current string
        int j = 0;
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j);  // shrink prefix
        
        if (prefix.empty()) return ""; // no common prefix
    }
    return prefix;
}

int main() {
    vector<string> words = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(words) << endl;

    vector<string> words2 = {"dog", "racecar", "car"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(words2) << endl;

    return 0;
}
