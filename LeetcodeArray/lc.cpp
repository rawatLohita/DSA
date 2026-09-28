#include<iostream>
#include<vector>
#include<string>
using namespace std;
// str = {"Flower" , "FLight" , "Flow"}
string LongestPrefix(vector<string> str){
    string pref = str[0];
    if (str.empty()) return "";

    for(int i = 1; i < str.size(); i++){ //i is the element of vector str
        int j = 0; // j is iterating each element ex: iterating in flower 
        while ( j < pref.size() && j<str[i].size() && pref[j]==str[i][j]){
            j++;
        }
        pref = pref.substr(0,j);
    
    if (pref.empty()) return "";
    }
    return pref;
}

int main(){
    vector<string> str = {"Flower" , "Flight" , "Flow"};
    cout<<LongestPrefix(str);
}