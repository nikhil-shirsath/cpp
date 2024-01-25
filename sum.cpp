#include<iostream>
using namespace std;

void print(int ans){
    cout<<"ans is ="<<ans;
}

int sum(int x, int y){
    int res =x+y;
    print(res);
    return res;
}



int main(){
    int first , second;
    cout<<"Enter any two no : ";
    cin>>first>>second;

    cout<<"Sum of Given no : "<<sum(first,second);

} 