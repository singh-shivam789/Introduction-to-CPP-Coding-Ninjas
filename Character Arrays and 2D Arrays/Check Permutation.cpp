// Check Permutation
// Send Feedback
// For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
// Permutations of each other
// Two strings are said to be a permutation of each other when either of the string's 
// characters can be rearranged so that it becomes identical to the other one.

// Example: 
// str1= "sinrtg" 
// str2 = "string"

// The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.
// Input Format:
// The first line of input contains a string without any leading and trailing spaces, representing the first string 'str1'.

// The second line of input contains a string without any leading and trailing spaces, representing the second string 'str2'.
// Note:
// All the characters in the input strings would be in lower case.
#include<bits/stdc++.h>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    if(strlen(input1) != strlen(input2)) return false;
    int n = strlen(input1);
    int freq[256] = {0};
    char sav;
    
    for(int i=0; i<n; i++){
        sav = input1[i];
        freq[(int)sav] += 1;
    }

    for(int i=0; i<n; i++){
        sav = input2[i];
 		freq[(int)sav] -= 1;	
    }
    
    for(int i=0; i<256; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
