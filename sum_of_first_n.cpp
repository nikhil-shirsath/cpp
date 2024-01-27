#include<iostream>
using namespace std;

int sum_of_n(int n){
    int sum=0;
    for (int i=1 ; i<=n;i++)
        sum+=i;
    
    return sum;
}

int formula(int n){
    return (n*(n+1))/2;
}

int main(){
    int n;
    cout<<"Enter a number till you want to get sum : ";
    cin>>n;
    cout<<"sum of first "<<n <<" = "<<sum_of_n(n)<<endl;

    cout<<"using formula sum of first "<<n <<" = "<<formula(n);

}