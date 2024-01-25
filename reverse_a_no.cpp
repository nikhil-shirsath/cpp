#include<iostream>
using namespace std;

int main(){
    int no,rev=0;
    cout<<"Enter any no to reverse : ";
    cin >>no;

    while(no>0){
        int last_digit = no%10;
        rev =rev*10+last_digit;

        no=no/10;
    }
    cout<<"Reverse no is : "<<rev<<endl;

    return 0;
}