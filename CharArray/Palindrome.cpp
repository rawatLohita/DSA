#include<iostream>
using namespace std;

int len(char arr[]){
    int len=0;
    for(int i=0;arr[i]!= '\0';i++){
        len++;
    }
    return len;
}

bool checkPalindrome(char a[],int n){
    int s = 0;
    int e = n-1;
    
    while(s<=e){
        if (a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    char a[20];
    cout << "Enter to check for palindrome: ";
    cin >> a;

    if(checkPalindrome(a,len(a))){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a palindrome" << endl;
    }

    return 0; // proper exit code
}
