#include<iostream>
using namespace std;

int main(){
    int a= 10;
    int *ptr;
    ptr= &a;
    cout<<"address of a = "<<ptr<<endl;
    ptr++;
    cout<<"address of a = "<<ptr<<endl; // its gap is 4 bytes because int takes 4bytes.

    int arr[] ={10,20,30,40};
    cout<<*arr<<endl;
    ptr =arr;

// using pointer  we can modify.

    for(int i=0; i<=3; i++){
        cout<<*(ptr+i)<<endl;
    }

// using array pointer modify.

    for(int i=0; i<=3; i++){
        cout<<*(arr+i)<<endl;
        //arr++;//illiggel because arrays are constant .
    }

return 0;
}