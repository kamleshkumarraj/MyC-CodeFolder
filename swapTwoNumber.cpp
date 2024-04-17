#include<iostream>
using namespace std;
int main(){
    int number1,number2,temporaryVar;
    cout<<"Enter First Number = ";
    cin>>number1;
    cout<<"Enter Second Number = ";
    cin>>number2;
    
    //This Logic Is Used for when we don't using other variable.
    // number1 = number1+number2;
    // number2 = number1-number2;
    // number1 = number1-number2;

    //this logic is used when we using other variable.
    temporaryVar = number1;
    number1 = number2;
    number2 = temporaryVar;
    cout<<"First number = "<<number1<<"\n";
    cout<<"Second number = "<<number2;

}