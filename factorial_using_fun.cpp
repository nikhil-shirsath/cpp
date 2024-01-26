#include<iostream>
using namespace std;

int factorial(int n){
    int i,fact=1;
    for(i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}


int main(){
    int n;
    cout<<"Enter no to find out fectorial : ";
    cin>>n;
    cout<<"factorial of n = "<< factorial(n);
}