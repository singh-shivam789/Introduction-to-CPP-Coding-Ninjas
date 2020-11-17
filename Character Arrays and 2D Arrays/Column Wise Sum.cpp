// Column Wise Sum
// Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.

// Input Format :
// Line 1 : Two integers M and N (separated by space)
// Next M lines : ith row elements (separated by space)

// Output Format :
// Sum of every ith column elements (separated by space)

// Constraints :
// 1 <= M, N <= 10^3

// Sample Input :
// 4 2
// 1 2
// 3 4
// 5 6
// 7 8

// Sample Output :
// 16 20

#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
	int arr[r][c];    
	for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
	for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
        sum = 0;
    }
}
