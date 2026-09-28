#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int m = s+(e-s)/2; //start=s,end=e,mid=m all are indexes

    while(s<e){
        if(arr[m]>arr[0]){
            s = m+1;
        }
        else{
            e = m;
        }
        m = s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={7,9,1,2,3};
    cout<<"The Pivot element is at index:"<<pivot(arr,5);
}