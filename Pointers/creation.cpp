#include<iostream>
using namespace std;

int main(){
    int num = 5;
    int *p = &num;
    
    // cout<<num<<endl;  
    // cout<< *p <<endl;
    cout<<p<<endl;
    cout<<p+2;
    //cout<< &num <<endl;

    // cout<<sizeof(num)<<endl;
    // cout<<sizeof(p)<<endl;  //in some PC's pointer the size of pointers is 8

    // int *p1 = NULL;   Way2 of creating pointer
    // p1 = &num;
    
    // Copying a pointer
    // int *q = p;
    // cout<< p << " - " << q << endl;
    // cout<< *p << " - " << *q << endl;
}