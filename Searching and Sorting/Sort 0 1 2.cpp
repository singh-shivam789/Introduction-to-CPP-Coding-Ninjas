// Sort 0 1 2
// You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s.
// Write a solution to sort this array/list in a 'single scan'.
// 'Single Scan' refers to iterating over the array/list just once or to put it in other words,
// you will be visiting each element in the array/list just once.
// In case you didn’t know, this problem is a variation of a famous problem called the ‘Dutch National Flag Problem’

#include<bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n){
    int i=0,nz=0,nt=n-1;
    while(i<=nt){
        if(arr[i] == 0){
            swap(arr[i++], arr[nz++]);
        }
        else if(arr[i] == 1){
            i++;
        }
        else{
            swap(arr[i], arr[nt--]);
        }
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
