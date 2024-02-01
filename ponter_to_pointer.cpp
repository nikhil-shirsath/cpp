#include <iostream>
using namespace std;

int main(){
    int val =10;
    int *p;
    p=&val;
    cout<< *p<<endl;

    int **q;
    q = &p;
    cout<<*q<<endl; // this will print address of p pointer.
    cout<<**q<<endl; // this wil return val 

    **q=1333;

    cout<<val<<endl;
}