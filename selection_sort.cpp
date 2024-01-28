#include<iostream>
using namespace std;

int main(){
    int n,i,j; 
    cout<<"Enter the size of an array : ";
    cin>>n;
    int array[n];
    cout<<"Enter elements in an array : \n";
    for (i=0; i<n;i++){
        cin>>array[i];
    }

    //sorting process 

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n;j++){
            if(array[j] <array[i]){
                int temp =array[j];
                array[j]= array[i];
                array[i]=temp;
            }
        }
    }

    cout<<"Sorted array : \n";
    for(i=0; i<n; i++){
        cout<<array[i]<<endl;
    }

}