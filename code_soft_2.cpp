#include<iostream>
using namespace std;
int main(){
    cout<<"__CALCULATOR__\n\n";
    int num1;
    cout<<"Enter 1st number : ";
    cin>>num1;
    int num2;
    cout<<"\nEnter 2nd number : ";;
    cin>>num2;
    char sign;
    cout<<"\nEnter the operation which you want to perform : ";
    cin>>sign;
    switch(sign){
        case '+' : cout<<num1<<" "<<sign<<" "<<num2<<" "<<"="<<" "<<num1+num2;
        break;
        case '-' : cout<<num1<<" "<<sign<<" "<<num2<<" "<<"="<<" "<<num1-num2;
        break;
        case '*' : cout<<num1<<" "<<sign<<" "<<num2<<" "<<"="<<" "<<num1*num2;
        break;
        case '/' : cout<<num1<<" "<<sign<<" "<<num2<<" "<<"="<<" "<<num1/num2;
        break;
    }

    return 0;
}