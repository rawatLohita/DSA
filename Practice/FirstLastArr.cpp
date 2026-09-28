#include<iostream>
using namespace std;

int First(int arr[], int n, int k){
    int mid, s, e,ans;
    s = 0;
    e = n-1;
    ans = -1;
    mid = (s+e)/2;

    while(s<=e){
    if (arr[mid] == k){
        ans = mid;
        e = mid - 1;
        
    }
    else if (arr[mid] > k){
        e = mid - 1;
    }
    else if (arr[mid] < k ){
        s = mid + 1;
    }
    mid = (s+e)/2;
    }
return ans;
}

int last(int arr[], int n, int k){
    int mid, s, e,ans;
    s = 0;
    e = n-1;
    ans = -1;
    mid = (s+e)/2;

    while(s<=e){
    if (arr[mid] == k){
        ans = mid;
        s = mid + 1;
        
    }
    else if (arr[mid] > k){
        e = mid - 1;
    }
    else if (arr[mid] < k ){
        s = mid + 1;
    }
    mid = (s+e)/2;
    }
return ans;
}



int main(){
    int arr[7] = {2,5,5,5,6,8,9};
    int r1 = First(arr,7,5);
    int r2 = last(arr,7,5);
    cout<<r1<<"     "<<r2;

}