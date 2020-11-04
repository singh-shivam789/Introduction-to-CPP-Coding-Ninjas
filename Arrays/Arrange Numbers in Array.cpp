// Arrange Numbers in Array
// You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
// Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,.......4,2.
// Note:
// You need not print the array. You only need to populate it.
#include<iostream>
using namespace std;

void arrange(int *arr, int n){
    int val = 1,j=n-1,i=0;
    while(i<=j){
        if(val%2 != 0){
            arr[i++] = val;
        }
        else{
            arr[j--] = val;
        }
        val += 1;
    }
}

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    arrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete [] arr;
}
