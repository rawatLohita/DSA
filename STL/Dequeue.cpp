// doubly ended queue
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(5);
    d.push_front(2);
    d.push_back(7);
    d.push_front(9);

    for (int x:d){            //Printing before popping
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<d.size()<<endl;

    d.pop_back();
    d.pop_front();

    for (int x:d){            //Printing after popping
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<d.at(1)<<endl;
    cout<<d.size()<<endl;
    // cout<<d.empty()<<endl;
    d.begin();

}