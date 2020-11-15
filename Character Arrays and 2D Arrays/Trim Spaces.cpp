// Trim Spaces
// Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
// There can be multiple spaces present after any word.

// Input Format :
//  String S

// Output Format :
// Updated string

// Constraints :
// 1 <= Length of string S <= 10^6

// Sample Input :
// abc def g hi

// Sample Output :
// abcdefghi

#include<bits/stdc++.h>
using namespace std;

void trimSpaces(char input[]) {
    // Write your code here
    int l = strlen(input);
    int i=0, k=0, count=0;
    while(i<l){
        if(input[i] == ' '){
            count++;
            i++;
        }
        else{
            swap(input[i++], input[k++]);
        }
    }

    input[l - count] = '\0';
    return;
}

int main(){
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
