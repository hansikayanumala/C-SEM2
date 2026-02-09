#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int Left[50], Right[50];

    for (int i = 0; i < n1; i++)
        Left[i] = arr[low + i];

    for (int j = 0; j < n2; j++)
        Right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
            arr[k++] = Left[i++];
        else
            arr[k++] = Right[j++];
    }

    while (i < n1)
        arr[k++] = Left[i++];

    while (j < n2)
        arr[k++] = Right[j++];
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int n, arr[100];

    cin >> n;

    for (int i = 0; i < n;

