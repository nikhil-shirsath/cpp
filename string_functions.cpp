#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str ="center of devlopment in advance computing.";
    string name ="welcome to cdac";
    // cout<<str<<endl; //prints string as it is 
    // string str1 (5,'n'); // this prints same charecter given no times.
    // cout<<str1;

    // string strl;
    // getline(cin,strl);//takes input along with whitespace.
    // cout<<strl<<endl;
    
    // str.append(name); //adds parimeters string at the end of first string.
    // cout<<str<<endl;

    // cout<<str+name<<endl; // this called concadination means adding a string at the end of first string . But this does not change in the origional string like append fuction.
    // str = str+name; //like append function 
    // cout<<str<<endl;

    // str.clear();// this function removes value inside the string.
    // cout<<str<<endl;
    // string first ="abc";
    // string second ="xyz";
    // cout<<first.compare(second)<<endl;//compares first string with second string if first string is lesser then second string the answer will be -ve no.
    // cout<<second.compare(first)<<endl; //compare first string with second string if first string is greater then anwer will be +ve integer.
    // cout<<second.compare(second)<<endl;//if both are same then answer will be 0.

    // string estring="";
    // cout<<estring.empty()<<endl; // this function check whether given string contains charecters or not .
    // if(estring.empty()){
    //     cout<<"Given string is completely empty. \n";
    // }else{
    //     cout<<"given string is not an empty string.\n ";
    // }

    // name.erase(0,7); // this function used to delete some elements from the string aspects two params starting index no , no of charecters. makes changes in origional string.
    //cout<<name;
    // cout<<name.find("cdac"); //this function finds the given string in orinal string and returns its index no .
    
    // name.insert(15," nikhil");//first param is index no where to insert and second param is string.
    // cout<<name<<endl; // this function makes chages in origional string.
    
    // cout<<name.length();// this function tells the length of a string.

    string sub_string;
    // sub_string = name.substr(0,7); // this function takes out sub string of a string but doesnt makes any changes inside origional string so we need another string to store it.
    // cout<<name<<endl; 
    // cout<<sub_string<<endl;

    // string num_str="342.652"; //if decimal point is available then also it returns integer value
    // int ans = stoi(num_str); // function convers numericle string to int
    // cout<<ans <<endl;

    // string con_string= to_string(ans);
    // cout<<con_string<<endl;
    name.insert(7,"NIKHIL");
    sort(name.begin(), name.end()); // sorts string charecters and arrage them in lixicografical order make changes in origional string
    cout<<name;
  
    return 0;
}