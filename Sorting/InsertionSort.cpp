#include<iostream> //Doubt
#include<vector>
using namespace std;
void InsertionSort(vector<int> arr,int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for (;j>=0;j--){
            if (arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else 
                break;
        }
        arr[j+1]=temp;
    }
    for (int k=0;k<n;k++){
    cout<<arr[k]<<" ";
    }
}

int main(){
vector<int> vec={10,1,7,4,8,2,11};
InsertionSort(vec,vec.size());
}