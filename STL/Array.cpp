#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> a = {3,4,5,6,7};
    cout<<a.at(4)<<endl;
    cout<<a.empty()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    
}