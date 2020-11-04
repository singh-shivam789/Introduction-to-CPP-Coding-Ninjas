// Selection Sort
// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Selection Sort'.
// The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.

#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for(int k=0; k<n; k++)
    {
        int min = arr[k], minPos = k;
        for(int i=k+1; i<n; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
                minPos = i;
            }
        }
        int temp = arr[k];
        arr[k] = min;
        arr[minPos] = temp;
    }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
