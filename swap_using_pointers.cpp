#include<iostream>
using namespace std;

void swap(int *aptr,int *bptr){ //arguments assesed using ointes
    int temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;
}

void increament(int *ival){
    (*ival)++;
}

int main(){
int a =212;
int b=522;
cout<<"Before swapping done \n";
cout<<"value of a = "<<a<<endl;
cout<<"value of b = "<<b<<endl;
swap(&a,&b); //function calling by refrence 
cout<<"After swapping done \n";
cout<<"value of a = "<<a<<endl;
cout<<"value of b = "<<b<<endl;
increament(&a);
cout<<a<<endl;
}