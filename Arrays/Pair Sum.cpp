// Pair Sum
// You have been given an integer array/list(ARR) and a number X. Find and return the total number of pairs in the array/list which sum to X.
// Note:
// Given array/list can contain duplicate elements. 

#include<bits/stdc++.h>
using namespace std;
int pairSum(int arr[], int n, int x) {
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j] == x)
            {
                count++;
            }
            else
            {
                continue;
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

    cout << pairSum(input, size, x) << endl;

    delete[] input;
}
