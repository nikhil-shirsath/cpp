#include<iostream>
using namespace std;

//time o(n)
int lenear_search(int arr[] ,int size , int key){
    for (int i=0; i<size ; i++){
        if(key ==arr[i]){
            return i;
        }
    }
    return -1;
}


//time o(logn)
int binary_search(int arr[], int n, int key){
    int left=0, right =n-1;
    int mid ;
    for (int i=0; i<n; i++){
        mid=(left+right)/2;
        if(key == arr[mid]){
            return mid;
        }else if(key> arr[mid]){
            left =mid+1;
        }else if(key <arr[mid]){
            right=mid-1;
        }
    }

    return -1;
}

int main(){
    int n,key;
    cout<<"Enter size of an array : ";
    cin>>n;
    int array[n];
    cout<<"Enter elememts of an array : "<<endl;

    for(int i =0; i<n;i++){
        cin>>array[i];
    }

    cout<<"Enter key to search in array : ";
    cin>>key;
    // int index=-1;

    // for(int i =0; i<n ;i++){
    //     if(key ==array[i]){
    //         index=i;
    //         cout<<"Element found at index : "<<index<<endl;
    //         break;
    //     }
    // }

    // if(index ==-1){
    //     cout<<"Element not found "<<endl;
    // }

    int index =lenear_search(array,n,key);

    if( index == -1){
        cout<<"element not found in array. \n";
    }else{
        cout<<"Element found at index : "<<index<<endl;
    }

    int index =binary_search(array,n,key);

    if( index == -1){
        cout<<"element not found in array. \n";
    }else{
        cout<<"Element found at index : "<<index<<endl;
    }

}