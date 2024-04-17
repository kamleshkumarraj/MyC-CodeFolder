#include<iostream>
using namespace std;
int main(){
    int patties, buns;
    cout<<"Enter the number of patties : ";
    cin>>patties;
    cout<<"Enter the number of buns : ";
    cin>>buns;
    if(patties>=buns){
        cout<<"Number Of burger = "<<buns;
    }
    else{
        cout<<"Number Of burger = "<<patties;
    }
    return 0;
}