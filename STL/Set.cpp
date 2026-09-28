#include<iostream>      
#include<set>             //Set contains all unique elements
using namespace std;        // Check for find function --> Not able to get output

int main(){
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(9);
    s.insert(8);
    s.insert(4);
    s.insert(2);

    for(int x:s){
        cout<<x<<" ";
    }

    // cout<<s.find(3)<<endl;
    cout<<endl<<s.count(11);
}