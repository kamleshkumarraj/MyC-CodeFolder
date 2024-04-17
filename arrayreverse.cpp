#include <iostream>
using namespace std;
// function for reverse the array using swaping
int swap(int arr[], int n)
{
    int temp;
    int a = n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[a];
        arr[a] = temp;
        a--;
    }
    // logic for reverse array using indexing ;
    //    cout<<"Print our array after reverse : ";
    //    for(int i=0; i<n; i++){
    //     cout<<"\n"<<arr[i];
    //    }
    //    return arr[n];
    return 0;
}
int reverseArray(int arr[], int n)
{
    swap(arr, n);
}
// int reverseArray(int arr[] , int n){
//     cout<<"Print our array after reverse : ";
//     for(int i=n-1; i>=0; i--){
//         cout<<"\n"<<arr[i];
//     }
// }
int main()
{
    int arr[10], n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elelment of the array : ";
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    // print our array after reverse :
    cout << "Print Our array after reverse : ";
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << arr[i];
    }
}