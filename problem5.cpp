#include<iostream>
using namespace std;
void printSalary(int sal){
    if(sal>100){
        sal = sal-10;
        cout<<"Our total salary = "<<sal;
    }
    else{
        cout<<"Our total salary = "<<sal;
    }
}
int main(){
    int salary;
    cout<<"Enter Your Total Salary = ";
    cin>>salary;
    printSalary(salary);
}