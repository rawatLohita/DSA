#include<iostream>
using namespace std;

class student {
    
    int age;
    public:
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return this->age;
    }
};
int main(){
    student s;
    s.setAge(18);
    cout<<s.getAge();
}