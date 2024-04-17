#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<"\n"<<arr[i];
    }
}
int main(){
    int arr[100], n ,temp;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enetr the element of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>=arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
    cout<<"Print our element in ascending order : ";
    printArray(arr,n);
}