#include <iostream>
using namespace std;

//loops to do something iteratively 
/*
loop runs till condition is true and unpade is also neccessory otherwise it will be infinite 

for (intialisation ; condition ; update){
    //body
}

*/
//find the sum of all no till n 
int main(){
int n, sum ;
// cout <<" Enter a no till you want to get sum : ";
// cin >> n;
// sum =0;
// for (int i =1 ; i<=n; i++)
//     sum+=i;
// cout <<"Sum is equals to : "<<sum ;

//// program to take an input until the user enters -ve no 
////while first checks condition then it runs its body.
// cout<<"Enter any no : ";
// cin >> n;
// while(n>=0){
//     cout<<n<<endl;
//     cout<<"Enter any no : ";
//     cin >> n;

// }

////Do while this loop first executes body at least once then checks condition.

cout<<"Enter a number : ";
cin>>n;

do{
    cout<<n<<endl<<"Enter a number : ";
    cin>>n;
    
}while(n>=0);



return 0;
}