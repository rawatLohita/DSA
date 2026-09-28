#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int target,int row,int col){
    for (int row=0;row<3;row++){
        for (int col=0;col<4;col++){
            if (arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
int arr[3][4]={{10,20,30,40},{55,66,77,88},{91,120,131,142}};
    for (int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int tar;
    cout<<"Enter the number to search in array:";
    cin>>tar;

    if(isPresent(arr,tar,3,4)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    
}

    