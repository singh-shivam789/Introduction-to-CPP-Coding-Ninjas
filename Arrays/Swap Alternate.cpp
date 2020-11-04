// Swap Alternate
// You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
// You don't need to print or return anything, just change in the input array itself.
#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int *arr, int size){
    if(size%2 == 0){
        int i=0; 
        while(i<size){
            int j = i+1;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i+=2;
        }
    }else if(size%2 != 0){
        int i=0; 
        while(i<size-1){
            int j = i+1;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i+=2;
        }
    }
}
int main(){

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swapAlternate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete [] arr;   
}
