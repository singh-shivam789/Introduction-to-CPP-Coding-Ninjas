// Find Duplicate
// You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
// Note :
// Duplicate number is always present in the given array/list.
#include<bits/stdc++.h>
using namespace std;

int duplicateNumber(int *arr, int n)
{
    //Write your code here
	for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j == i){
                continue;
            }
            else if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<duplicateNumber(arr, n);
}
