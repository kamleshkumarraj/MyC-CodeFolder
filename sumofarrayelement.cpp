#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int factorialSum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + fact(arr[i]);

    }
    return sum;
}
int main(){
    int arr[100] , n , sum =0;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum +=arr[i]; 

    }
    cout<<"Sum of the all element = "<<sum;
    int sum1 = factorialSum(arr,n);
    cout<<"\nFactorial Sum of all element = "<<sum1;
}