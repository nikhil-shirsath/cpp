#include<iostream>
using namespace std;

int main(){
    float first, second, third;
    cout<<"Enter any three no in sequence seprated by whitespace : ";
    cin >> first >>second >>third;

    // if(first >= second && first >= third){
    //     cout<<"greter no is first  : "<<first<<endl;
    // }
    // else if (second>= first && second >= third){
    //     cout<<"greater no is second  : "<<second <<endl;
    // }
    // else if(third >= first && third >= second){
    //     cout<<"greater no is third : "<<third <<endl;
    // }

    if (first> second){
        if(first >third){
            cout<<"Greter no is = "<<first<<endl;
        }
        else{
            cout<<"Greater no is = "<<third <<endl;
        }
    }else{
        if(second > third){
            cout<<"Greater no is = "<<second<<endl;
        }
        else{
            cout<<"Greater no is =  "<<third<<endl;
        }
    }
    return 0;
}