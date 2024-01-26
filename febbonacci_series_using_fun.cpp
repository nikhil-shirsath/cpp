#include<iostream>
using namespace std;

void febbonaci(int n ){
    int first =0, second =1,next_term;

    for(int i=1; i<=n;i++){
        cout<<first<<endl;
        next_term =first +second;
        first = second ;
        second= next_term;
    }

    return;
}

int main(){
    int n ;
    cout<<"Enter no of terms to find out fibbonaci series : ";
    cin>>n;

    febbonaci(n);

}