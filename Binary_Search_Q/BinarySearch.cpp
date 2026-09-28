#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=(start+end/2);
        if (arr[mid]==key){
            return mid;
        }
        if (key>arr[mid])
            start=mid+1;
        else
            end=mid-1;
        mid=(start+end/2);
    }
}
int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,3,5,7,9};

    binarySearch(even,)
}