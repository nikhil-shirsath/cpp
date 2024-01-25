#include<iostream>
using namespace std;

int factorial(int x){
    int fact =1,i=2;
    while(i<=x){
        fact = fact *i;
        i++;
        
    }
    return fact;
}

int main(){
    int no1,no2;
    cout<<"Enter first no : ";
    cin>>no1;
    cout<<"Enter second no : ";
    cin>>no2;

    cout<<"Factorial of : "<<no1<<" = "<<factorial(no1)<<endl;
    cout<<"Factorial of : "<<no2<<" = "<<factorial(no2)<<endl;



}