#include <iostream>
#include <vector>
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
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
        {
            swap(arr[j - 1], arr[j]);
        }
    }
}

void merge(vector<int> &arr, int st, int mid, int end)
{
    int i = st;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + st] = temp[idx];
    }
}

void mergesort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;

        mergesort(arr, st, mid);
        mergesort(arr, mid + 1, end);

        merge(arr, st, mid, end);
    }
}

int partition(vector<int> &arr, int st, int end)
{
    int idx = st - 1;
    int pivot = arr[end];

    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quicksort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pividx = partition(arr, st, end);

        quicksort(arr, st, pividx - 1);
        quicksort(arr, pividx + 1, end);
    }
}

int main()
{
    // int st=0;
    vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int end = arr.size();
    int n = arr.size();

    // int arr[6] = {13, 46, 24, 52, 10, 9};
    // bubble_sort(arr, n);
    quicksort(arr, 0, arr.size() - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
}