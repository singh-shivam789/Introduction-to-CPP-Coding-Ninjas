// Print the following pattern for given number of rows.
// Input format :

// Line 1 : N (Total number of rows)

// Sample Input :
// 5

// Sample Output :
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include<iostream>
using namespace std;

void printPatt(int n){
    int starpos = n, step,val;
    for(int i=0; i<n; i++){
        	val = 1, step = 2*i-1;
        for(int j=0; j<2*n; j++){
            if(j>=starpos && j<=step+starpos){
                cout<<"*";
            }
            else if(j<starpos){
                cout<<val++;
            }
            else if(j>step+starpos){
                cout<<--val;
            }
        }
        starpos--;
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n; 
    printPatt(n);
}
