#include<iostream>
using namespace std;

int main(){
    int age ;
    string fullname;
    cout<<"Enter your full name "<<endl;
    getline(cin,fullname);
    cout<<"Enter your age ";
    cin>>age;
    cout<<"hello "<<fullname<<" | You are "<<age<<" years old."<<endl;
}