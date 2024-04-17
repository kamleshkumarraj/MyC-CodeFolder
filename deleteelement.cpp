#include <iostream>
using namespace std;
int deleteElement(int arr[], int n, int position)
{
    if (position >= n)
    {
        cout << "Delete Not Possible : ";
    }
    else
    {
        for (int i = position - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}
int main()
{
    int arr[10], n, position;
    cout << "Enter the size of the element : ";
    cin >> n;
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the positio for remove element : ";
    cin >> position;
    deleteElement(arr, n, position);
    cout << "Print our array after remove element : ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << "\n"
             << arr[i];
    }
}