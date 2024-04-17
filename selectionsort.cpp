#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<"\n"<<arr[i];
    }
}
int main(){
    int arr[100],n,temp;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter your array element : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]<=arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }
    cout<<"Print our array in descending order : ";
    printArray(arr,n);
}