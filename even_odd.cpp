#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Enter any no to check no is even or odd : ";
    cin >> num;
    if(num %2 ==0)
        cout<<"Given no is even : "<<num<<endl;
    else
        cout<<"Given no is Odd : "<<num<<endl;
    
    return 0;
}