#include<iostream>
using namespace std;

int main(){
    int i,j,row;
    cout<<"Enter no of rows : ";
    cin>>row;

    for(i=row; i>=1 ; i--){
        for(j=1; j<i; j++){
            cout<<"_";
        }
        for(j=1; j<=row; j++){
            cout<<"*";
        }
        cout<<endl;

    }
}

/*

Enter no of rows : 5
____*****
___*****
__*****
_*****
*****

*/