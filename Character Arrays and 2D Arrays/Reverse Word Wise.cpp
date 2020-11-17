// Reverse Word Wise

// Reverse the given string word wise. 
// That is, the last word in given string should come at 1st place, 
// last second word at 2nd place and so on. Individual words should remain as it is.

// Input format :
// String in a single line

// Output format :
// Word wise reversed string in a single line

// Constraints :
// 0 <= |S| <= 10^7
// where |S| represents the length of string, S.

// Sample Input 1:
// Welcome to Coding Ninjas

// Sample Output 1:
// Ninjas Coding to Welcome

#include<bits/stdc++.h>
using namespace std;

void reverse(char input[], int i, int j){
    for(; i<=j; i++,j--){
        swap(input[i], input[j]);
    }
}

void reverseStringWordWise(char input[]) {
    // Write your code here
    reverse(input, 0, strlen(input) - 1);
    for(int i=0,j=0; i<=strlen(input); i++){
        if(input[i] == ' ' || input[i] == '\0'){
            reverse(input, j, i-1);
            j = i + 1;
        }
    }
}

int main(){
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;   
}
