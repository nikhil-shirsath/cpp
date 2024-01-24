#include<iostream>
using namespace std;

int main(){
    int i,j,row,col;
    cout<<"Enter no of rows : ";
    cin>>row;
    for(i=1; i<=row ; i++){
        for(j=1; j<=i ; j++)
        cout<<i;
        cout<<endl;
    }

    return 0;
}

/*

1
22
333
4444
55555
666666
7777777
88888888
999999999

*/