#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter row = ";
    cin>>row;
    cout<<"Enter Column = ";
    cin>>column;
    for(int r=0; r<row; r++){
        for(int c=0; c<column; c++){
            if(r==0) && (c==1){
                cout<<"*";
            }
            else if(r==1 ||r==2||r==4||r==5||r==6 && c==0||c==4){
                cout<<"*";
            }
            else if(r==3){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}