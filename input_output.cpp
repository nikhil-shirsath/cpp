#include<iostream>
#include<string>
using namespace std;

int main(){
    int age ;
    string fullname;
    //data with spaces from terminal
    cout<<"Enter your full name "<<endl;
    getline(cin,fullname);
    cout<<"Enter your age ";
    cin>>age;
    cout<<"hello "<<fullname<<"| You are "<<age<<" years old."<<endl;

    //string input without spaces 
    cout<<"Enter your name and age seprated by space "<<endl;
    cin>>fullname;
    cin>>age;
    cout<<"hello "<<fullname<<"| You are "<<age<<" years old."<<endl;

}