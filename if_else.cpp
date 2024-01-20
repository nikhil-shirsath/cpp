#include <iostream>
using namespace std;

int main(){
    float savings;
    cout<<"Enter rahuls savings : ";
    cin>>savings;

    if(savings >=5000){
        cout<<"go with Neha \n";
        if(savings >=10000){
            cout<<"I will prefer for Roadtrip \n";
        }else{
            cout<<"I will prefer for Shopping \n";
        }
    }else if(savings >=2000 && savings <5000){
        cout<<"go with Rashami \n";
    }else
        cout<<"Go with Friends \n";
    
    return 0;

}