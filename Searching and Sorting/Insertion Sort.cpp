//Code Insertion Sort
//Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
  int current;
  for(int i=1,j; i<n; i++){
    current = arr[i];
    for(j=i-1; j>=0; j--){
        if(current < arr[j]){
            arr[j+1] = arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1] = current;
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

    insertionSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
