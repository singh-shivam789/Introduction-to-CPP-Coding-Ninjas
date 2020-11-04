// Sort 0 1
// You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1.
// Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.
// Note:
// You need to change in the given array/list itself. Hence, no need to return or print anything.

#include<iostream>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    // Write your code here
    for(int i=0, j=size-1; i<=j;){
        if(input[i] == 0 && input[j] == 1){
            i++, j--;
            continue;
        }
        else if(input[i] == 1 && input[j] == 0){
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            i++, j--;
            continue;
        }
        else if(input[i] == 1 && input[j] == 1){
            j--;
            continue;
        }
        else if(input[i] == 0 && input[j] == 0){
            i++;
            continue;
        }
    }
}


int main(){

    int size;

    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> input[i];
    }

    sortZeroesAndOne(input, size);

    for (int i = 0; i < size; ++i)
    {
        cout << input[i] << " ";
    }

    cout << endl;
    delete[] input;
    return 0;
}
