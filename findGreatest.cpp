#include<iostream>
using namespace std;
int main(){
    int number1,number2,number3;
    cout<<"Enter First Number = ";
    cin>>number1;
    cout<<"Enetr Second Number = ";
    cin>>number2;
    cout<<"Enter Third Number = ";
    cin>>number3;
    if(number1>=number2 && number1>=number3){
        cout<<"Greater Number = "<<number1;
    }
    else if(number2>=number3){
        cout<<"Greater Number = "<<number2;
    }
    else{
        cout<<"Greater Number = "<<number3;
    }
    cout<<"\nThank You";
}