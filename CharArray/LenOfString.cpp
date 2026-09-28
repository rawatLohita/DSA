#include<iostream>
using namespace std;
int main(){
char name[20];
cin>>name;
int len=0;
for(int i=0;name[i]!= '\0';i++){
    len++;
}
cout<<len;
return 0;
}
