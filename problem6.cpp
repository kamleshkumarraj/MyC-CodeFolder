#include<iostream>
using namespace std;
int main(){

   /*  char name[100];
     cout<<"Enter Your Name : ";
     //cin>>name;
     cin.get(name,100);
     cout<<"Hello! My name Is : "<<name;
     return 0; */
/*
     string name;
     cout<<"Enter Your Name : ";
     cin>>name;
     cout<<"My name is : "<<name;
     */
   /* string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"My name is : "<<name;
    */
    string word;
    int len;
    cout<<"Enter the length of String : ";
    cin>>len;
    cout<<"Enter Your Words : ";
    // getline(cin,word);
    cin>>word;
    int k=0;
if(word.length()==len){
    for(int i=0; i<4;  i++){
        if(word.at(i)=='a' || word.at(i)=='e' || word.at(i)=='i' || word.at(i)=='o' || word.at(i) =='u' ){
            k = k+1;
        }
    }
    if(k>=1){
            cout<<"String Length Match \n" ;
        cout<<"Easy For pronounce : ";

    }
    else{
        cout<<"String Length Match \n" ;
        cout<<"Hard For Pronounce : ";
    }
}
else{
    cout<<"String Length  Not Match ";
}
    return 0;
}
