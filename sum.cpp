#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}


int main()
{
    int arr[200], i , n , sum;
    cout << "Enter the size of the array:";
    cin >> n ;
    cout << "Enter the elements of the array:";
    for(i = 0; i < n ; i++){
        cin >> arr[i];
    }

    sum = sumOfArray(arr, n);
    cout << "The sum of the Array is :" << sum ;
    return 0;
}
    
    