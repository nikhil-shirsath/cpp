#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an array ";
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cout<<"array ["<< i <<"] = ";
        cin>>array[i];
    }

    for(int i=0; i<n;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}