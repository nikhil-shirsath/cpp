#include<iostream>
using namespace std;

int main(){
    int n, m,key;
    cout<<"Enter no of rows : ";
    cin>>m;
    cout<<"Enter n o of columns : ";
    cin>>n;
    int array[m][n];
    //getting elements in array 
    for(int i =0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"array ["<<i<<"] ["<<j<<"] =";
            cin>>array[i][j];
        }
    }
    cout<<"Enter key to find in matrix : ";
    cin>>key;
    bool flag=0;

    for(int i=0; i<m ; i++){
        for (int j=0; j<n; j++){
            if(key == array[i][j]){
                flag =1;
                cout<<"Element found at index ["<<i<<"] ["<<j<<"] "<<endl;
            }
        }
    }

    if(flag ==0){
        cout<<"Element not found in array. "<<endl;
    }




    cout<<"Print elements of an array \n";
    for(int i=0; i<m ; i++){
        for(int j=0; j<n; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}