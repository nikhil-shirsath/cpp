#include<iostream>
using namespace std;

int main(){

    int i, j, row;
    cout<<"Enter no of rows : ";
    cin>>row;

    for(i=row ; i>=1; i--){
        for(j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}


/*

Enter no of rows : 6
123456
12345
1234
123
12
1

*/