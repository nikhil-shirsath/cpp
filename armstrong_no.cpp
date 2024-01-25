#include<iostream>

using namespace std;

int main(){
    int no ,armstrong=0;
    int prev;

    cout<<"Enter any no to check armstrong no : ";
    cin>>no;
    prev= no;

    while(no>0){
        int last_digit = no%10;
        armstrong =(last_digit*last_digit*last_digit)+armstrong;
        no=no/10;
    }
    
    if(prev == armstrong){
        cout<<"given no is armstrong no : "<<armstrong<<endl;
    }else{
        cout<<"Given no is not armstrong : "<<prev<<endl;
    }
}