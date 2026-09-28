#include<iostream>
#include<vector>
using namespace std;
void SelectionSort(vector<int> arr,int n){
    // int min=i;
    for (int i=0;i<n-1;i++){
        int min=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for (int k=0;k<n;k++){
    cout<<arr[k]<<" ";
    }
}

int main(){
    vector <int> vec={1,7,9,8,2,3,0,11,27,19,98};
    SelectionSort(vec,vec.size());
    
}


/*
Vector:
Creating Vector: vector<datatype> name={if you want to add somthing during declartion}
*/