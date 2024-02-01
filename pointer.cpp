#include<iostream>
using namespace std;

int main(){
    int val =10;
    int *vptr;
    vptr= &val;
    //prove that pointer stores address so another variable;
    cout<<&val<<endl;
    cout<<vptr<<endl;
    cout<<*vptr<<endl;//this calls derefrencing.

    //using pointers we can change value of another variable.
    cout<<"Before cahnge = "<<val<<endl;
    *vptr=112;
    cout<<"After change = "<<val<<endl;
    cout<<"After change = "<<*vptr<<endl;

    //we uses data type of pointer according to normal variable.
    float *fptr;
    float fval=100.3;
    fptr= &fval;
    cout<<*fptr<<endl;

    //fptr=&val; //we uses pointers according to the normal variables. 
    //ptra = val;// int variable cant assign to float pointer.

    bool bval =true;
    bool *bptr ;
    bptr = &bval;
    *bptr = false;
    cout<<*bptr<<endl;
    
    return 0;
}