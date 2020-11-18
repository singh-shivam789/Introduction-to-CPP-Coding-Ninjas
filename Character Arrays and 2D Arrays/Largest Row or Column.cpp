// Largest Row or Column
// For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column 
// has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.

// Note :
// If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column 
// has the same largest sum, consider the ith row as answer.

// Consider :
// If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or -2^31 is the smallest value for the range of Integer.

// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= M <= 10^3

// Time Limit: 1sec

// Sample Input 1 :
// 1
// 2 2 
// 1 1 
// 1 1

// Sample Output 1 :
// row 0 2
    
// Sample Input 2 :
// 2
// 3 3
// 3 6 9 
// 1 4 7 
// 2 8 9
// 4 2
// 1 2
// 90 100
// 3 40
// -10 200
    
// Sample Output 2 :
// column 2 25
// column 1 342

#include<bits/stdc++.h>
using namespace std;
void findLargest(int input[][1000], int r, int c){
    if(r==0 && c == 0){
        cout<<"row"<<" "<<0<<" "<<INT_MIN;
        return;
    }
   	
    int maxSum = INT_MIN, index = -1;
    bool isRow = true;
    for(int i=0; i<r; i++){
        int rowSum = 0;
        for(int j=0; j<c; j++){
            rowSum += input[i][j];
        }
        if(rowSum > maxSum){
            maxSum = rowSum;
            index = i;
        }
    }
    
    for(int j=0; j<c; j++){
        int colSum = 0;
        for(int i=0; i<r; i++){
            colSum += input[i][j];
        }
        if(colSum > maxSum){
            isRow = false;
            maxSum = colSum;
            index = j;
        }
    }
    
    if(isRow){
        cout<<"row"<<" ";
    }
    else{
        cout<<"column"<<" ";
    }
    cout<<index<<" "<<maxSum;
    return;
}

int main(){
    int r,c;
    cin>>r>>c;
    int arr[1000][1000];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    findLargest(arr, r, c);
  	return 0;
}
