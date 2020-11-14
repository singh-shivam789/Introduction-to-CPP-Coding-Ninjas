//Sum of Two Arrays

// Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. 
// Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index). 
// The idea here is to represent each array/list as an integer in itself of digits N and M.
// You need to find the sum of both the input arrays/list treating them as two integers and put the result in another array/list 
// i.e. output array/list will also contain only single digit at every index.

// Note:
// The sizes N and M can be different. 
// Output array/list(of all 0s) has been provided as a function argument. 
// Its size will always be one more than the size of the bigger array/list. 
// Place 0 at the 0th index if there is no carry. 

#include<bits/stdc++.h>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output){
    int carry = 0, sum = 0;
    int size3 = max(size1, size2) + 1;
    int i=size1-1,j=size2-1,k=size3-1;
    while(i>=0&&j>=0){
        sum = input1[i--] + input2[j--] + carry;
        output[k--] = sum % 10;
        if(sum > 9) carry = 1;
        else carry = 0;
        sum = 0;
    }
    while(i>=0){
        sum = input1[i--] + carry;
        output[k--] = sum % 10;
        if(sum > 9) carry = 1;
        else carry = 0;
        sum = 0;
    }
    while(j>=0){
        sum = input1[j--] + carry;
        output[k--] = sum % 10;
        if(sum > 9) carry = 1;
        else carry = 0;
        sum = 0;
    }

    output[0] = carry;
    return;
}

int main(){
    int size1;
    cin >> size1;

    int *input1 = new int[size1];

    for (int i = 0; i < size1; ++i){
        cin >> input1[i];
    }

    int size2;
    cin >> size2;

    int *input2 = new int[size2];

    for (int i = 0; i < size2; ++i){
        cin >> input2[i];
    }

    int outsize = 1 + max(size1, size2);
    int *output = new int[outsize];

    sumOfTwoArrays(input1, size1, input2, size2, output);

    for (int i = 0; i < outsize; ++i){
        cout << output[i] << " ";
    }

    delete[] input1;
    delete[] input2;
    delete[] output;
    cout << endl;
}
