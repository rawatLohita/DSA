#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("Hi");
    s.push("Lohita");
    s.push("Rawat");
    s.push("Hello");
    
    cout<<s.top()<<endl;

    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty();
}