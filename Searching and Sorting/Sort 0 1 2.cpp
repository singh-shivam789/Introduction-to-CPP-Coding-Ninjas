// Sort 0 1 2
// You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. 
// Write a solution to sort this array/list in a 'single scan'.
// 'Single Scan' refers to iterating over the array/list just once or to put it in other words, 
// you will be visiting each element in the array/list just once.

#include<bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n){
    int temp[n];
    int k,i,j;
    for(i=0, j=n-1, k=0; k<n; k++){
        if(arr[k] == 0){
            temp[i++] = 0;
        }
        else if(arr[k] == 2){
            temp[j--] = 2;
        }
    }
    for(; i<=j; i++){
        temp[i] = 1;
    }
    for(i=0; i<n; i++){
        arr[i] = temp[i];
    }
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort012(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
