#include<iostream>
using namespace std;

int square(int val ){
    return val*val;
}

bool pythagorian(int m , int first , int second){
    int max_sqr , first_sqr, second_sqr;
    max_sqr = square(m);
    first_sqr= square(first);
    second_sqr = square(second);
    if(max_sqr == first_sqr +second_sqr){
        return true;
    }
    return false;
}


int main(){
    int a,b,c,max;
    cout<<"Enter three no to check pythagorian no : ";
    cin>>a>>b>>c;
    if(a==b&&b==c){
        cout<<"given no is not pythagorian "<<endl;
    }else if(a>b && a>c){
        max=a;
        if(pythagorian(max,b,c)){
            cout<<"given no is pythagorian no : "<<a<<" "<<b<<" "<<c<<endl;
        }else{
            cout<<"Given no is not pythagorian "<<endl;
        }
    }else if(b> c && b>a){
        max=b;
         if(pythagorian(max,a,c)){
            cout<<"given no is pythagorian no : "<<a<<" "<<b<<" "<<c<<endl;
        }else{
            cout<<"Given no is not pythagorian "<<endl;
        }
    }else if(c>a && c>b){
        max=c;
         if(pythagorian(max,b,a)){
            cout<<"given no is pythagorian no : "<<a<<" "<<b<<" "<<c<<endl;
        }else{
            cout<<"Given no is not pythagorian "<<endl;
        }
    }


}