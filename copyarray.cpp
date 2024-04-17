#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<"\n"<<arr[i];
    }
}
int main(){
    int arr[100] , newarr[100] ,  n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        newarr[i] = arr[i];
    }
    cout<<"Print our array as it is : ";
    printArray(arr,n);
    cout<<"print our new array : ";
    printArray(newarr,n);
    cout<<"Print our old array after changing : ";
    arr[2]=89;
    printArray(arr,n);
    cout<<"print our coped array : ";
    printArray(newarr,n);

}