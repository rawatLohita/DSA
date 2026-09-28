#include<iostream>
using namespace std;
int First_Occurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid] == key){
            ans=mid;
            end=mid-1;
        }

        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int Last_Occurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid] == key){
            ans=mid;
            start=mid+1;
        }

        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int odd[5]={1,2,2,3,3};
    int f=First_Occurence(odd,6,3);
    int l=Last_Occurence(odd,6,3);
    cout<<"First Occurence of 3 is at index "<<First_Occurence(odd,6,3)<<endl;
    cout<<"Last Occurence of 3 is at index "<< Last_Occurence(odd,6,3)<<endl;
    cout<<"Total no of occurence of 3 is "<<(l-f)+1;

}