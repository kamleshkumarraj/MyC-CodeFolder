#include<iostream>
using namespace std;
int insertValue(int arr[], int n, int value ,int position){
   
    for(int i=n; i>=position; i--){
        arr[i]=arr[i-1];
    }
     position = position-1;
    arr[position] = value;

}
int main(){
    int arr[10],n,position,value;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the position for inserting the value : ";
    cin>>position;
    cout<<"Enter the value of inserting : ";
    cin>>value;
    insertValue(arr,n,value,position);


    cout<<"Print our modified array : ";
    for(int i=0; i<=n; i++){
        cout<<"\n"<<arr[i];

    }

}