#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;

    for(int i=n ; i>=0 ; i/10){
        cout<< i%10;
        i=i%10;
    }

}