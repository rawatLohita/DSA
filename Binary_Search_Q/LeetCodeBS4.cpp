#include<iostream>
#include<vector>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        for (int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
        for (int k=0;k<m;k++){
        cout<<nums1[k]<<" ";
        }
        }

    int main(){
        vector<int> vec1={1,7};
        vector<int> vec2={2,4};
        // vec1.push_back(vec2[0]);
        findMedianSortedArrays(vec1,vec2);
        
        //  for (int i=0;i<vec2.size();i++){
        //     vec1.push_back(vec2[i]);
        // }

        // for (int k=0;k<vec1.size();k++){
        //  cout<<vec1[k]<<" ";
        }
    
