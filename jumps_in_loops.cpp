//JUMPS IN LOOPS THIS TELLS HOW WE CAN CONTROL THE EXECUTION  OF LOOPS 
//there are two statement to control the flow of loops 
//break :
//continue : used to skip next iteration of the loop.

#include<iostream>
using namespace std;
// a girl name neha can go for trip on only odd date days .
//neha gots some pocket money if he dont have savings then she cant go out.
//on each trip she spends 300 rupees when the pocket money will be 0 from that day she will not go out. 
int main(){
int pocket_money=3000;
for (int date=1 ; date<=30 ; date++){
    if(date%2==0){
        continue;
    }
    cout<<"You can go out today! date : "<<date <<" amount she have is : "<<pocket_money<<" rs \n";
    pocket_money-=300;
    if(pocket_money <=0)
        break;
}

}