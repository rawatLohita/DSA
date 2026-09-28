#include<iostream>
using namespace std;
bool checkPrime(int n){
    if(n<=1){
        return 0;
    }
    else{
    for(int i=2;i<n;i++){
        if (n%i==0){
            return 0;
        }
    }
}
    return 1;

}

int countPrime(int n){
    int count = 0;
    for(int i=2;i<n;i++){
       if(checkPrime(i)){
        count++;
       }
    }
    return count;
}


int main(){
    int n;
    cout<<"Enter a number to check for prime numbers less than it:";
    cin>>n;
    cout<<countPrime(n);
}