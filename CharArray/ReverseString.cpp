#include<iostream>
using namespace std;
int len(char arr[]){
    int len=0;
for(int i=0;arr[i]!= '\0';i++){
    len++;
}
return len;
}

void reverse(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
    cout<<name;
}
int main(){
    char name[20];
    cout<<"Enter your name:";
    cin>>name;
    // cout<<endl;
    reverse(name,len(name));
}