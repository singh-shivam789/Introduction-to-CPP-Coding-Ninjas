// Push Zeros to end
// You have been given a random integer array/list(ARR) of size N. 
//You have been required to push all the zeros that are present in the array/list to the end of it. 
//Also, make sure to maintain the relative order of the non-zero elements.

#include<bits/stdc++.h>
using namespace std;

void pushZeroesEnd(int *arr, int n){
    //Write your code here
    for(int i=0,j=0; i<n;){
        if(arr[i] != 0){
            swap(arr[i++], arr[j++]);
        }
        else{
            i++;
        }
    }
}

int main(){
    int size;

    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    pushZeroesEnd(input, size);

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }

    cout << endl;
    delete[] input;
}
