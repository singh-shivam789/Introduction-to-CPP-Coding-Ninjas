// Spiral Print
// For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. 
// That is, you need to print in the order followed for every iteration:
// a. First row(left to right)
// b. Last column(top to bottom)
// c. Last row(right to left)
// d. First column(bottom to top)

// Mind that every element will be printed only once.

// Sample Input 1:
// 4 4 
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16

// Sample Output 1:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 

//Sample Input 2:
// 3 3 
// 1 2 3 
// 4 5 6 
// 7 8 9

//Sample Output 2:
// 1 2 3 6 9 8 7 4 5 

#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int **input, int r, int c){
    //Write your code here

    int re=r-1,rs=0,cs=0,ce=c-1,count=0;        
    while(count < (r*c)){
        for(int i=cs; count < (r*c)&&i<=ce; i++){
            cout<<input[rs][i]<<" ";
            ++count;
        }
        rs++;
        for(int i=rs; count < (r*c)&&i<=re; i++){
            cout<<input[i][ce]<<" ";
            ++count;
        }
        ce--;
        for(int i=ce; count < (r*c)&&i>=cs; i--){
            cout<<input[re][i]<<" ";
            ++count;
        }
        re--;
        for(int i=re; count < (r*c)&&i>=rs; i--){
            cout<<input[i][cs]<<" ";
            ++count;
        }
        cs++;
    }
}
int main(){
    int row, col;
    cin >> row >> col;
    int **matrix = new int *[row];

    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    spiralPrint(matrix, row, col);

    for (int i = 0; i < row; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    cout << endl;
}
