#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// class Solution {
// public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        int m = nums1.size();
        int n = nums2.size();
        vector<int> v(m+n);
        for (int i=0;i<m;i++){
            v[i]=nums1[i];
        }
        for (int i=0;i<n;i++){
            v[m+i]=nums2[i];
        }
        sort(v.begin(),v.end());
        for (int x:v){
            cout<<x<<" ";
        }
        cout<<endl<<v.size();
        int s = 0;
        int e = v.size()-1;
        int mid = s+(e-s)/2;
        if (v.size() % 2 == 0){
            median =( (double)v[mid] + (double)v[mid+1] ) / 2;
        }
            //median= (v[mid]+v[mid+1])/2  --> though median is a double (should return a floating value) but it returns a int value
            // v[mid] and v[mid+1] are both int.So (v[mid] + v[mid+1]) / 2 is evaluated using integer division, which discards the decimal part before assigning it to median.
            // Even though median is a double, the calculation already lost precision before assignment.
        
        else{
            median = v[mid];
        }
        cout<<endl<<median;
        return median;
    }
// };
int main(){
    vector<int> v1={1,2};
    vector<int> v2={3,4};
    findMedianSortedArrays(v1,v2);
    
}