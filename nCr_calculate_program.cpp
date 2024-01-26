#include<iostream>
using namespace std;

int factorial(int val){
    int fact =1;
    
    for(int i=1; i<=val ; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n,r;
    cout<<"Enter value of n = ";
    cin>>n;
    cout<<"Enter value of r = ";
    cin>>r;

    int ans = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"your ans of nCr is = "<<ans;
}