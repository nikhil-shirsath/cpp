#include<iostream> //from this library cin and cout function comes.

int addNumbers(int first_param, int second_param){
    int sum = first_param +second_param;
    
    return sum ;
}

int multiply(int first_param , int second_param){
    int result = first_param *second_param;
    return result;
}

int main(){
    int first_number {3};
    int second_number {4};
    std::cout<<"First number : " << first_number<<std::endl;
    std::cout<<"second number : " << second_number<<std::endl;

    int sum = first_number+second_number;
    std::cout<<"sum  : " << sum<<std::endl;

    sum = addNumbers(2,2);
    std::cout<<"Ans from params : "<<sum<<std::endl;

    sum = addNumbers(44,23323);
    std::cout<<"Ans from params : "<<sum<<std::endl;

    std::cout<<"Ans with direct calling of the function : "<<addNumbers(2,123)<<std::endl;
    
    std::cout<<"Ans with direct calling of multipy  function : "<<multiply(2,123)<<std::endl;

    std::cerr<<"std:: cerr output : something went wrong"<<std::endl;
    std::clog<<"std:: clog output : something went wrong"<<std::endl;

    
    return 0;// this is for confermation that the program has successfullu executed.
}