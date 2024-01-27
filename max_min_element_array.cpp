#include<iostream>
#include<climits>
using namespace std;


int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int array[n];
    cout<<"Enter elements in array : "<<endl;
    for(int i=0; i<n;i++){
        cin>>array[i];
    }

    int max= INT_MIN;

    cout<<"maximum no : ";
    for(int i =0; i<n-1; i++){
        if(max <array[i]){
            max = array[i];
        }
    }
    cout<<"maxumum no is = "<<max<<endl;

    int min = INT_MAX;
    for(int i=0; i<=n-1;i++){
        if(min > array[i]){
            min=array[i];
        }
    }
    
    // for (int i=0; i<n; i++){
    //     max= max(max, array[i]);
    //     min = min(min,array[i]);
    // }

    cout<<"Minimum no is = "<<min<<endl;
}