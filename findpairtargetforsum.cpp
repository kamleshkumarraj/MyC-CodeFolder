#include<iostream>
using namespace std;
int main(){
    int arr[100] , n , target,count=0;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enetr the target for search : ";
    cin>>target;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                count+=1;

            }

        }
    }
    cout<<"Total Pair whose satisfied the target = "<<count;

}