// #include<iostream>
// using namespace std;
// int printarray(int arr[],int n){
//     for(int i=0; i<n; i++){
//         cout<<"\n"<<arr[i];
//     }
//     return 0;
// }
// int main(){
//     int arr[10],n;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     cout<<"Enter your array element : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"Print our array as it is : ";
//     // for(int i=0; i<n; i++){
//     //     cout<<"\n"<<arr[i];
//     // }
//     printarray(arr,n);
//     return 0;

// }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */         
//             int T;
//              cin>>T;
//             for(int k=0; k<T; k++){
//                 int row,column;
//                 int arr[10][10];
//                 cin>>row;
//                 cin>>column;
//                 for(int i=0; i<row; i++){
//                     for(int j=0; j<column; j++){
//                      cin>>arr[i][j];
//                     }
//                 }
//                 int newarr[10][10];
//                 for(int i=0; i<row; i++){
//                     for(int j=0; j<column; j++){
//                         newarr[i][j] = arr[j][i];
//                     }
//                 }
//                 for(int i=0; i<row; i++){
//                     for(int j=0; j<column; j++){
//                         if(newarr[i][j] == 0){
//                             newarr[i][j] =1;
//                         }
//                         else{
//                             newarr[i][j] = 0;
//                         }
//                     }
//                 }
//                 for(int i=0; i<row; i++){
//                     for(int j=0; j<column; j++){
//                         cout<<newarr[i][j]<<" ";
//                     }
//                     cout<<"\n";
//                 }
                
//             }
//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */         
            int T;
             cin>>T;
            for(int k=0; k<T; k++){
                int row,column;
                int arr[10][10];
                // cin>>row;
                // cin>>column;
                row=3;
                column=3;
                for(int i=0; i<row; i++){
                    for(int j=0; j<column; j++){
                     cin>>arr[i][j];
                    }
                }
                int newarr[10][10];
                for(int i=0; i<row; i++){
                    for(int j=0; j<column; j++){
                        newarr[i][j] = arr[j][i];
                    }
                }
                for(int i=0; i<row; i++){
                    for(int j=0; j<column; j++){
                        if(newarr[i][j] == 0){
                            newarr[i][j] =1;
                        }
                        else{
                            newarr[i][j] = 0;
                        }
                    }
                }
                for(int i=0; i<row; i++){
                    for(int j=0; j<column; j++){
                        cout<<newarr[i][j]<<" ";
                    }
                    cout<<"\n";
                }
                
            }
    return 0;
}