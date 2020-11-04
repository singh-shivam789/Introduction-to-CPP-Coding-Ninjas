// Triplet Sum
// You have been given a random integer array/list(ARR) and a number X. 
//Find and return the triplet(s) in the array/list which sum to X.

#include<bits/stdc++.h>
using namespace std;

int tripletSum(int *arr, int size, int x){
    int count = 0;
    //Write your code here
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                if(arr[i] + arr[j] + arr[k] == x){
                    count++;
                }
                else{
                    continue;
                }
            }
        }
    }
    return count;
}

int main(){
    int size;
    int x;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    cin >> x;

    cout << tripletSum(input, size, x) << endl;

    delete[] input;
}
