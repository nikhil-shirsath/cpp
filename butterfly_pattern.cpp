#include<iostream>
using namespace std;

int main(){

    int row,i,j;
    cout<<"Enter no of rows : ";
    cin>>row;

    for(i=1; i<=row; i++){
        for(j=1; j<=i ; j++){
            cout<<"*";
        }

        int space = 2*row -2*i;
        for(j=1; j<=space ; j++){
            cout<<"_";
        }
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=row; i>=1; i--){
        for(j=1;j<=i; j++){
            cout<<"*";
        }
        int space  = 2*row -2*i;
        for(j=1; j<=space ; j++){
            cout<<"_";
        }
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


/*

Enter no of rows : 6
*__________*
**________**
***______***
****____****
*****__*****
************
************
*****__*****
****____****
***______***
**________**
*__________*

*/