#include<iostream>
using namespace std;
int main(){
    int arr[10][10] , row , column;
    cout<<"Enter the value of row : ";
    cin>>row;
    cout<<"Enter the value of column : ";
    cin>>column;
    cout<<"Enter the element of array : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }
    int temp;
    for(int i=0; i<row; i++){
        for(int j=0; j<column/2; j++){
            temp = arr[i][j];
            arr[i][j] = arr[i][column-1];
            arr[i][column-1] = temp;



        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(arr[i][j]== 0){
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = 0;
            }
        }
    }
    //after printing the matrix;
    for(int i=0; i<row; i++){
        cout<<"[ ";
        for(int j=0; j<column; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<" ]";
        cout<<"\n";

    }
}