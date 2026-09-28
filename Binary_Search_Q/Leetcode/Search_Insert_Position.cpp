
#include<iostream>
#include<vector>
using namespace std;
int insert(vector<int> arr, int k)
{
        int s = 0;
        int e = arr.size()-1;
        int m = s+(e-s)/2;

        while (s<e){
            if (arr[m]==k){
                cout<< m;
            }
            if(arr[m]<k){
                s = m+1;
            }
            else {
                e = m-1;
            }
            m = s+(e-s)/2;
            }
            
            return -1;
        // if (arr[m]<k && k<arr[m+1]){
        //         cout<< m+1;
        //     }
        
    }
    int main(){
        vector<int> arr = {1,4,6,8,9};
        insert(arr,2);
    }
        
