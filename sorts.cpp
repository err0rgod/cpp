#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}

void bubble_sort(int arr[], int n){
    for(int i = n-1; i>=1;i--){
        for(int j = 0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}   

void insertion_sort(int arr[], int n){
    for(int i = 0;i<=n;i++){
        for(int j = i;j>0 && arr[j-1]>arr[j];j--){
            swap(arr[j-1],arr[j]);
        }
    }
}

int main()
{
    int n = 6;
    int arr[6] = {13, 46, 24, 52, 10, 9};
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}