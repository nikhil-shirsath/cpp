#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of char array : ";
    cin>>size;
    char arr[size+1];
    cin>>arr;
    bool check=1;

    int i=0;
    while(arr[i] != '\0' ){
        cout<<arr[i];
        i++;
    }
    cout<<endl;

    for(int i=0; i<size; i++){
        if(arr[i] != arr[size-1-i]){
            check =0;
            break;
        }
    }

    if(check ){
        cout<<"String is palendrome \n";
    }else{
        cout<<"String is not palendrome \n";
    }
}