#include<iostream>
using namespace std;

int main(){
    int rs=0 ,wrapper=0,chocolet=0,free;
    cout<<"Enter rupees you have : ";
    cin>>rs;

    cout<<"Enter in how much wrapper you will get free chocolet : ";
    cin>>free;

    chocolet=rs;
    wrapper=chocolet;

    int chocolet_using_wrapper = chocolet/3;
    chocolet +=chocolet_using_wrapper;
    int rest_chocolets = chocolet_using_wrapper/3;
    chocolet+=rest_chocolets;

    cout<<"maximum chocolet we  can eat : "<<chocolet;
}