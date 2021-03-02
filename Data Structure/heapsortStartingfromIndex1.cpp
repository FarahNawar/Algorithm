#include <iostream>
using namespace std;
 int n=4;
void printArray(int arr[], int n);
void heapSort(int arr[], int n);
void heapify(int arr[], int n, int i);
int main()
{

    int arr[n];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    int n = sizeof(arr)/sizeof(arr[1]);

    printArray(arr, n);
    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i ;
    int r = 2*i + 1;
    if (l <= n && arr[l] > arr[largest])
        largest = l;
    if (r <=n &&arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 ; i >= 1; i--)
        heapify(arr, n, i);
    for (int i=n; i>=1; i--)
    {
        swap(arr[1], arr[i]);
        heapify(arr, i-1, 1);
    }
}
void printArray(int arr[], int n)
{
    for (int i=1; i<=n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
