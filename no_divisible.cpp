////write numbers for  1 to 100 where no which are divisible by 3 are not present.

#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=100; i++){
         if(i%10 == 0){
            cout<<endl;
        }
        if(i%3 ==0){
            continue;
        }
        cout<<" "<<i<<" ";
       
    }
}
