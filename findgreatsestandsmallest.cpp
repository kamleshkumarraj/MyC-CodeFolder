#include<iostream>
using namespace std;
void sortArray(int arr[] , int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>=arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }

}
int main(){
    int arr[100] , n;
    cout<<"Enetr the size of the array: ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sortArray(arr,n);
    cout<<"Greatest value = "<<arr[n-1] <<"\nSmallest value = "<<arr[0];
}