#include<iostream>

using namespace std;

int main(){
    char arr[100]="nikhil";
    int i=0;
    while(arr[i] != '\0'){
        cout<<arr[i];
        i++;
    }
    cout<<i;
}