#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> s;
    s.push("Hi");
    s.push("Lohita");
    s.push("Rawat");
    s.push("Hello");
    cout<<s.front()<<endl;
}