#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int i){
   
    for (int j=2; j<=sqrt(i); j++){
        if(i%j==0){
          
            return false;
        }
    }   
        return true;
}


int main(){
    int upper, lower , i;
    bool flag=0;

    cout<<"Enter upper no : ";
    cin>>upper;
    cout<<"Enter lower no : ";
    cin>>lower;

    // for(i=upper; i<=lower; i++){
    //     for(int j=2; j<=sqrt(i); j++){
    //         if(i%j == 0){
    //             cout<<i<<"not a prime "<<endl;
    //             flag=1;
    //             break;
    //         }
    //     }

    //     if(flag ==0){
    //         cout<<i <<" prime no"<<endl;
    //     }
    //     flag=0;

     

    // }

    cout<<"Prime no between range is : "<<endl;

    for(i=upper ; i<=lower ; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;

}