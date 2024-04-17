#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, k = 0, i, k1 = 0;
    char check, check1;

    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the array element : ";

    //we take input from user 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //now check array is ascending or not 
    for (i = 0; i < n - 1; i++)
    {

        if (arr[i] <= arr[i + 1])
        {
            k = k + 1;
        }
    }
    if (k == i)
    {
        check = 't';
    }
    else
    {
        check = 'f';
    }

    //then we check array is descending or not 
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            k1 = k1 + 1;
        }
    }
    if (k1 == i)
    {
        check1 = 't';
    }
    else
    {
        check1 = 'f';
    }

//then we compare if two array are sorted ascending or descending then array is sorted otherwise array is not sorted
    if (check == check1)
    {
        cout << "Give array is not sorted : ";
    }
    else
    {
        cout << "Given array is sorted : ";
    }
}