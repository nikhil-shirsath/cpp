#include<iostream>
using namespace std;

int main(){
    int i,j,row ,k=1;
    // char k='a';

    cout<<"Enter no of rows : ";
    cin>>row;
    for(i=1; i<=row ; i++){
        for(j=1; j<=i ; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}


/*
int k=1;

Enter no of rows : 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/



/*
    char k='a';

a
b c
d e f
g h i j
k l m n o
*/