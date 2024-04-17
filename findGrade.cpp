#include<iostream>
using namespace std;
int main(){
    float mathMarks , physicsMarks , chemistryMarks , hindiMarks , englishMarks , totalMarks , percentage;
    cout<<"Enter marks of math = ";
    cin>>mathMarks;
    cout<<"Enter marks of physics = ";
    cin>>physicsMarks;
    cout<<"Enter marks of chemistry = ";
    cin>>chemistryMarks;
    cout<<"Enter marks of hindi = ";
    cin>>hindiMarks;
    cout<<"Enter marks of english = ";
    cin>>englishMarks; 

    if(mathMarks<=100 && physicsMarks<=100 && chemistryMarks<=100 && hindiMarks<=100 && englishMarks<=100){
        totalMarks = mathMarks+physicsMarks+chemistryMarks+hindiMarks+englishMarks;
        cout<<"Total Marks = "<<totalMarks;
        percentage = totalMarks/5;
        cout<<"\nTotal Percantage Marks = "<<percentage<<"% "<<"\n";

        if(percentage>=90 && percentage<=100){
        cout<<"Grade A+";
        }
        else if(percentage>=70 && percentage<90){
            cout<<"Grade A";
        }
        else if(percentage>=50 && percentage<70){
            cout<<"Grade B";
        }
        else if(percentage>=30 && percentage<50){
            cout<<"Grade C";
        }
        else if(percentage>=0 && percentage<30){
            cout<<"Grade Fail";
        }
        
    }
    else{
        cout<<"Please Enter Valid Marks : ";
    }
}
    


