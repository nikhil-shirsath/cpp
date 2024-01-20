//check that given to is prime or not.
#include<iostream>
using namespace std;

int main(){
    int no,i;
    cout<<"Enter anyto check its prime or not : ";
    cin>>no;
    if(no==1 ||no==0){
        cout<<"its neither prime nor composite no \n";
    }
    for( i=2; i<no; i++){
        if(no%i==0){
            cout<<no<<" is not prime \n";    
            break;
        }
    }

    if(i==no)   //to confort that the loop has been fully traverse by iterator
        cout<<no <<" is prime \n";
    
        
}