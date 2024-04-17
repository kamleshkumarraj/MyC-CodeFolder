#include<iostream>
using namespace std;
int main(){
    int arr[100] , n ,k=0 , i;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for( i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++ ){
            if(arr[i] == arr[j]){
                cout<<"First pair = "<<arr[i];
                break;
            }
            else{
            }
        }
    }
    cout<<i<<"\n";
    cout<<k;
    k=k-1;
    if(k==i){
        cout<<"No any pair available : ";
    }
}