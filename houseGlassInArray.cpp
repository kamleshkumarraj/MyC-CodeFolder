#include<iostream>
using namespace std;
int main(){
    int arr[10][10] , row , column;
    cout<<"Enter the size of the row = ";
    cin>>row;
    cout<<"Enter the size of the column = ";
    cin>>column;
    cout<<"Enter your array element : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    int max = -87669;
    for(int i=0; i<row-2; i++){
        for(int j=0; j<column-2; j++){
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] +arr[i+2][j] + arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>=max){
                max = sum;
            }
        }
    }
    cout<<"Maximum Sum of houseglass = "<<max;

}