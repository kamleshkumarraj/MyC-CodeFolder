#include<iostream>
using namespace std;
int main(){
    int arr[100],n,quarries;
    cout<<"Enter the number of element : ";
    cin>>n;
    cout<<"Enter the array element : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of quarries for search : ";
    cin>>quarries;
    for(int i=0; i<quarries; i++){
        int number;
        int k=0;
        cout<<"\nEnter the number for search : ";
        cin>>number;
        for(int j=0; j<n; j++){
            if(number == arr[j]){
            k=1;
            break;
        }
        }
        if(k==1){
            cout<<"\nYES";
        }
        else{
            cout<<"\nNO";
        }
    }

}