#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int nCr_fun(int i, int j){
    return factorial(i)/(factorial(i-j)*factorial(j));
}


int main(){
    int n;
    cout<<"Enter no of terms of pascal triangle : ";
    cin>>n;
   
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            //here willbe function call of ncr
            cout<<nCr_fun(i,j)<<" ";
        }
        cout<<endl;
    }
}


/*

Enter no of terms of pascal triangle : 5
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

*/