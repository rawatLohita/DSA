#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

// bool checkDuplicate(vector<int> &nums){
//     unordered_map<int,int> mp;

//     for(int i = 0; i<nums.size(); i++){

//         if(mp.find(nums[i]) == mp.end()){
//             mp[nums[i]] = i;
            
//         }
//         else {
//             return true;
            
//         }
//     }
//     return false;
// }

// use of unorderd set is better than unordered map since there is no use of index reference here.

bool checkDuplicate(vector<int> &nums){
    unordered_set<int> seen;
    for(int x : nums){
        if(seen.count(x)) return true;
        seen.insert(x);
    }
    return false;
}

int main(){
    vector<int> nums = {2,3,6,4,1};
    cout<<checkDuplicate(nums);
    
}


