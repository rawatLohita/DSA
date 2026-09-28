#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(6);
    v.push_back(5);
    v.push_back(9);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.at(4)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<"Before popping"<<endl;
    for (int x : v) { // for every element in vector v , copy elements into variable x and run the loop
        cout << x << " ";
    }

    v.pop_back();
    cout<<endl<<"After popping"<<endl;

    for (int x : v) { 
        cout << x << " ";
    }

    // v.clear();
    cout<<endl<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    vector<int> a(5,2); //initialization of a vector of 5 elements with 2
    for (int x : a) { 
        cout << x << " ";
    }

    cout<<endl;

    cout<<"Copied Vector : "<<endl;
    vector<int> new_v(v);
    for (int x : new_v) { 
        cout << x << " ";
    }
}