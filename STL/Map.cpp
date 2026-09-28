#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1] = "Lohita";
    m[2] = "Rawat";
    m[3] = "Hello";

    for (auto x:m){
        cout<<x<<endl;
    }
}