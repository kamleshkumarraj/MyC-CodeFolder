#include<iostream>
using namespace std;
int large;
void findLargest(int arr[] , int n){
     large =arr[0];
    for(int i=1; i<n; i++){
        if(large<=arr[i]){
            large = arr[i];
        }
    }
}
void findSecondLargest(int arr[] , int n){
    findLargest(arr,n);
    for(int i=0; i<n; i++ ){
        if(large==arr[i]){
            arr[i] = 0;
        break;
        }
    }
    findLargest(arr,n);
    cout<<"\n Second Largest number = "<<large;
}
int main(){
    int arr[10],n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the array element : \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    findSecondLargest(arr,n);
    
}