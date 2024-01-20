#include<iostream>
using namespace std;

int main(){
    int lower, upper , i,j ;
    cout<<"Enter lower no : ";
    cin>>lower;
    cout<<"Enter upper no : ";
    cin>>upper;

    for(i=lower ; i<=upper ; i++){
        for(j=2; j<i;j++){
            if(i%j==0){
                //cout<<"no : "<<i<<" not prime \n";
                break;
            }
        }

        if(j==i){
            cout<<"no : "<<i<<" prime \n";
        }
    }

    return 0;
}