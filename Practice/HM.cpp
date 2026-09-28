#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> twosum(vector<int>& nums, int target){
    unordered_map<int,int> mp;

    for(int i=0; i<nums.size(); i++){
        int complement = target-nums[i];

        if(mp.find(complement) != mp.end()){
            return{mp[complement],i};
        }
        mp[nums[i]] = i;
    }
    return{};
}

int main(){
    vector<int> nums = {2,7,11,15};
    vector<int> result = twosum(nums,9);
    cout<< result[0] << "   "<< result[1];
}