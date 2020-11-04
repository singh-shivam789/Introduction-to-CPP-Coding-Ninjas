// Check Array Rotation
// You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order)
// and then rotated by some number 'K' in the clockwise direction.
// Your task is to write a function that returns the value of 'K', that means,
// the index from which the array/list has been rotated.

#include<bits/stdc++.h>
using namespace std;

int arrayRotateCheck(int *arr, int n){
    // We basically find index of minimum
    // element
    int min = arr[0], min_index=0;
    for (int i=0; i<n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
}

int main(){

    int size;
    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    cout << arrayRotateCheck(input, size) << endl;
    delete[] input;

    return 0;
}
