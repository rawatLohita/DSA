#include<iostream>
using namespace std;

int main(){
    // int a = 10;
    // int *b = &a;
    // int **c = &b;

    // cout<<"Address of a is: "<< &a <<endl;
    // cout<<"Address of b is: "<< &b <<endl;

    // cout<< c <<endl;
    // cout<< *c <<endl;
    // cout<< **c <<endl;


  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 5;
  cout << ptr;
  return 0;
}


