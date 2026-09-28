#include<iostream>   //check for begin() --> output not coming
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(5);
    l.push_back(6);
    l.push_back(2);
    l.push_back(9);
    l.push_front(3);

    cout<<"Before emptying"<<endl;
    for (int x:l){
        cout<<x<<" ";
    }

    cout<<endl;

    // cout<<l.begin()<<endl;
    // l.begin();
    // cout<<l.empty()<<endl;
    list<int>::iterator it = l.begin();
    
}