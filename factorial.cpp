#include<iostream>
using namespace std;
int findFact(int number){
    int fact = 1;
    for(int i=1; i<=number; i++){
        fact = fact*i;
    } 
    cout<<"Factorial = "<<fact;
    return 0;
}
int main(){
    int number;
    cout<<"Enter the number for find the factorial = ";
    cin>>number;
    findFact(number);
}