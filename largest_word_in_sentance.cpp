#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an char array : ";
    cin>>n;
    char arr[n+1];
    cout<<"Enter a sentance : ";
    cin.getline(arr,n); //used to take sentances as input.
    //cin.ignore();//used to clear buffer

    int i=0,currlen=0,maxlen=0;
    while(1){
        if(arr[i]==' ' || arr[i] =='\0'){
            if(currlen >maxlen){
                maxlen=currlen;
            }
            currlen=0;

        }else{
            currlen++;

        }

        if(arr[i]=='\0')
            break;
        
        i++;
    }

    cout<<maxlen<<endl;
    cout<<currlen<<endl;


    return 0;
}