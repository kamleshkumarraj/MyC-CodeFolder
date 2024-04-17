#include<iostream>
using namespace std;
int main(){
    int arr[100] , n , target , count =0;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter your target : ";
    cin>>target;
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k] == target){
                    count+=1;

                }
            }
        }
    }
    cout<<"Total pair = "<<count;
}