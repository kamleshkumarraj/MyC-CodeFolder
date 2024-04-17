// Write a programm for a simple calculator.
#include<iostream>
using namespace std;
int main(){
    int number1,number2;
    char choice;
    cout<<"Enter First Number = ";
    cin>>number1;
    cout<<"Enter Your Choice Like as (+,-,*,/ & %) = ";
    cin>>choice;
    cout<<"Enter Second number = ";
    cin>>number2;
    if(choice=='+'){
        cout<<number1<<" + "<<number2<<" = "<<number1+number2;
    }
    else if(choice == '-'){
       cout<<number1<<" - "<<number2<<" = "<<number1-number2; 
    }
    else if(choice =='*'){
        cout<<number1<<" * "<<number2<<" = "<<number1*number2;
    }
    else if(choice =='/'){
        cout<<number1<<" / "<<number2<<" = "<<number1/number2;
    }
    else if(choice == '%'){
        cout<<number1<<" % "<<number2<<" = "<<number1%number2;
    }
    else{
        cout<<"please Enter Valid Input : ";
    }
    cout<<"\nThank You : ";

}