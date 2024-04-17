#include<iostream>
using namespace std;
int main(){
    int arr[10][10] , row , column,right_sum=0 ,left_sum=0 ;
    cout<<"Enter the number of row : ";
    cin>>row;
    cout<<"Enter the size of column : ";
    cin>>column;
    cout<<"Enter the element of the array : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }
    //for display our matrix in right way ;
    cout<<"Print our matrix in right way : \n";
    for(int i=0; i<row; i++){
        cout<<"[ ";
        for(int j=0; j<column; j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<" ]";
        cout<<"\n";
    }
    //for find sum of the left to right diagonal :
    for(int i=0; i<row; i++) {
        for(int j=0; j<column; j++){
            if(i==j){
                right_sum += arr[i][j];
            }

        }
    }
    cout<<"Sum of right diagonal = "<<right_sum;
    // for find the sum of right to left;
    int a=0;
    int b= column-1;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(i==a && j==b){
                left_sum += arr[i][j];
                a++;
                b--;
            }
        }
    }
    cout<<"\nSum of left diagonal = "<<left_sum;
    cout<<"\nHii";
    int difference = right_sum - left_sum;
    cout<<"Difference of two diagonal = "<<difference;

}