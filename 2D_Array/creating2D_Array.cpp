#include<iostream>
using namespace std;
int main(){
    //row wise input:
    int arr[3][4];
    cout<<"Enter elements of array"<<endl;
    for (int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }

    for (int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    
}