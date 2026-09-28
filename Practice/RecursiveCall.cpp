#include<iostream>
using namespace std;

void count(int n, int i){
    // base case
    if (n == 0 ){
        return ;
    }
     if (i == 0 ){
        return ;
    }
    cout<<n;
    count (1, i+1);
    cout<<i;
    
}


int main(){
    int n;
    cin >> n;
    count(1,n);
}