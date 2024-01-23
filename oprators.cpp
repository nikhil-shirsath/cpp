#include<iostream>
using namespace std;

int main(){
    int i=1;
    int j=2,k;
    // i = i++ + ++i; //4
    // cout<<i<<endl;
    // k =i+ j + i++ + j++ + ++i + ++j; //13
    // cout<<i<<" "<<j<<" "<<k<< endl;
    // i =0;
    // i= i++ - --i + ++i - i--;//0
    // cout<<i;

    // i=1;j=2;k=3;
    // int m = i-- -j-- - k--;
    // cout<<i<<endl;//0
    // cout<<j<<endl;//1
    // cout<<k<<endl;//2
    // cout<<m<<endl;//-4

//input a number n and tell whether its equal to , less than or more then 10

int n;
cout<<"Enter any no : ";
cin>>n;
// if(n==10)
//     cout<<"no is equal to 10 \n";
// else if (n>10)
//     cout<<"No is gratter then 10\n";
// else
//     cout<<"No is less than 10 \n";

//write a program to output whether a number is divisible by both 3 and 3 or divisible by only one of them

if(n%2==0 && n%3==0)
    cout<<" given no is divisible by both 2 and 3 \n";
else if(n%2==0 || n%3==0)
    cout<<" given no is only divisible by any one 2 or 3 \n";
else
    cout<<" given no is not divisible by 2 or 3 \n";
return 0;
}