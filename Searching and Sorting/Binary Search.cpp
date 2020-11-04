// Binary Search
// You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X.
// Write a function to search this element in the given input array/list using 'Binary Search'.
// Return the index of the element in the input array/list. In case the element is not present in the array/list, then return -1.
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *input, int n, int val){
    //Write your code here

    int l=0,h=n-1,mid;
    for(;l<=h;){
        mid = (l+h)/2;
        if(val == input[mid]){
            return mid;
        }
        else if(val > input[mid]){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return -1;
}

int main(){
    int size;
    cin >> size;
    int *input = new int[size];

    for(int i = 0; i < size; ++i)
    {
        cin >> input[i];
    }
    int val;
    cin >> val;
    cout << binarySearch(input, size, val) << endl;
    delete [] input;
    return 0;
}
