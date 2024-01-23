#include<iostream>
using namespace std;

int main(){

    int row , column,i,j;

    cout<<"Enter no of rows in pattern : ";
    cin>> row;
    cout<<"Enter no of columns in pattern : ";
    cin>>column;

    for(i=row; i>=0 ; i--){
        for(j=i ; j<column; j++)
        cout<<"*";
        cout<<endl;
    }
        for(i=0; i<=row ; i++){
        for(j=i ; j<column; j++)
        cout<<"*";
        cout<<endl;
    }

}