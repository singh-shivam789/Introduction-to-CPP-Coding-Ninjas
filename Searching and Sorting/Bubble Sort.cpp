// Code Bubble Sort
// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Bubble Sort'.
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n){
    //Write your code here
    for(int k=0; k<n; k++)
    {
        for(int i=0, j=i+1; i<n-1;)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[i], arr[j]);
            }
            i++,j++;
        }
    }
    return;
}

int main(){
    int n;
    cin>>n;
    int *input = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> input[i];
    }

    bubbleSort(input, n);

    for (int i = 0; i < n; ++i)
    {
        cout << input[i] << " ";
    }

    delete[] input;
    cout << endl;
}
