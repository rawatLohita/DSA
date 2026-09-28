#include<iostream>
#include <utility>
using namespace std;

pair<int,int> sum(int target, int arr[], int n){

    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n ; j++){
            int sum = arr[i]+arr[j];
            if (sum == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
    int arr[5] = {2, 5, 7, 1, 6};
    auto result = sum(11,arr,5);
    cout<< result.first << "    " << result.second;
    
}