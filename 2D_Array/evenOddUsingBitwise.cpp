#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    if (x&1){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }
}