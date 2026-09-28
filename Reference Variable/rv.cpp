#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int &j = i;

    i++;
    cout<<i<<endl;

    j++;
    cout<<i;
    
    return 0;
}
