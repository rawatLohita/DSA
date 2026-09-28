#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& v, int t){
    int s = 0;
    int e = v.size()-1;
    int m = s+(e-s)/2;

    while (s<=e){
        if (v[m]==t){
            cout<<m;
            break;
        }

        if (v[s]<=v[m]){
            if (t>=v[s] && t<v[m])
                e = m-1;
            else 
                s = m+1;
        }
        else {
            if (t>v[m] && t<=v[e])
                s = m+1;
            else 
                e = m-1;
        }
        m = s+(e-s)/2; 
    }
    return -1;
}
int main(){
    vector<int> v={4,5,6,7,0,1,2};
    search(v,4);
}