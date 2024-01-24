#include<iostream>
using namespace std;

int main(){
    int i,j,row;
    cout<<"Enter no of rows : ";
    cin>>row;

    for(i=1; i<=row ; i++){
        for(j=1; j<=row-i; j++){
            cout<<"_";
        }
        for(j=1; j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/*

Enter no of rows : 5
____1
___1 2
__1 2 3
_1 2 3 4
1 2 3 4 5

*/