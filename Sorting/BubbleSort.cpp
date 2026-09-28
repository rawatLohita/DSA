#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> arr,int n){
    bool swapped = false;
    for (int i=1;i<n;i++){
        for (int j=0;j<n-i;j++){
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                swapped=true;
        }
        if (swapped == false)
            break;
    }
    for (int k=0;k<n;k++){
    cout<<arr[k]<<" ";
    }
}
int main(){
    vector<int> vec={2,7,4,1,9,99,67,45};
    selectionSort(vec ,vec.size());
}