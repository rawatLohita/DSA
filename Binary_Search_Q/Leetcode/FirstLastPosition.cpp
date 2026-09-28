#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& n, int t) {
int First(vector<int>& n, int t){
    int s = 0;
    int e = n.size()-1;
    int m = s+(e-s)/2;
    int ans1 = -1;

    while (s<=e){
        if (n[m]==t){
            ans1 = m;
            e = m-1;
        }
        if (n[m] > t){
            e = m-1;
        }
        else {
            s = m+1;
        }
        m = s+(e-s)/2;
    }
    return ans1;
}
int Last(vector<int>& n, int t){
    int s = 0;
    int e = n.size()-1;
    int m = s+(e-s)/2;
    int ans2 = -1;

    while (s<=e){
        if (n[m]==t){
            ans2 = m;
            e = m-1;
        }
        if (n[m] > t){
            e = m-1;
        }
        else {
            s = m+1;
        }
        m = s+(e-s)/2;
    }
    return ans2;
}
   }
}; 