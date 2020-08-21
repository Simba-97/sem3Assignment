#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8 , 9 ,10};
    int n;
    cout << "Enter the range upto which the number should be added";
    cin >> n;

    int sum = sumOfArray(arr, n);
    cout << "The sum of the array upto the desired range is:" << sum<< endl;
    return 0;
}