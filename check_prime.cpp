#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int no,i;
    bool flag =0;
    cout<<"Enter any no to check prime : ";
    cin>>no;

    for(i=2; i<= sqrt(no) ; i++ ){
        if(no%i == 0){
            cout<< "not a prime : "<<no <<endl;
            flag=1;
            break;
        }
    }

    if(flag == 0){
        cout<<"No is prime : "<<no;
    }

}