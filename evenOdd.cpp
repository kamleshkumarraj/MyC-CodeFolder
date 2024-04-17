#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter your number for check even or odd = ";
    cin>>number;
    if(number%2==0){
        cout<<number<<" Is a Even number : ";
    }
    else{
        cout<<number<<" Is a Odd number : ";
    }
    cout<<"\nThank You";
} 