#include<iostream>  //preprocesor directive which is used to add some files 
using namespace std;    // we uses std namespace so insted of write again and again we defined globally.

int main(){ //entery point of program 
    int amt1, amt2,sum;

    cout<<"Hello C++ programming world\n"; //extraction operator //function which comes from iostream file used to print on console.

    cout<<"Enter amount given by mother : ";
    cin>>amt1;
    cout<<"Enter amount given by father : ";
    cin>>amt2;
    sum = amt1+amt2;
    cout<<"Child have total : "<<sum <<" RS\n";
    return 0;// exit point of function 
}