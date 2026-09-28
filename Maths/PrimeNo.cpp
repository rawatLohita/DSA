#include<iostream>
using namespace std;

//Time complexity O(n^2) --> We use Sieve of Erathosthenes to reduce time complexity

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
int main(){
    int n;
    cout<<"Enter a number to check for prime:";
    cin>>n;
    if(checkPrime(n)){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a prime number";
    }
}