// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.

#include<bits/stdc++.h>
#include<climits>
using namespace std;

int findUnique(int *arr, int n){
    //Write your code here
    for(int i=0; i<n; i++){
        bool matched = false;
        for(int j=0; j<n; j++){
            if(i == j){
                continue;
            }
            else if(arr[i] == arr[j]){
                matched = true;
                break;
            }
        }
        if(matched == false){
            return arr[i];
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
    cout<<findUnique(arr, n);
}

