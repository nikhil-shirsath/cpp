#include<iostream>
#include<string>

using namespace std;

int main(){
    string first ;
    string second;
    cout<<"Enter first string : ";
    getline(cin, first);
    cout<<"Enter second string : ";
    getline(cin, second);

    if(! first.compare(second)){
        cout<<"Strings are  equal \n";
    }else{
        cout<<"Strings are not equal. \n ";
    }
}