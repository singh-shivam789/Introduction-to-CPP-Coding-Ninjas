// Check Palindrome
// Given a string, determine if it is a palindrome, considering only alphanumeric characters.

// Palindrome
// A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.
// Example:
// If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards, it is said to be a valid palindrome.

// The expected output for this example will print, 'true'.
// From that being said, you are required to return a boolean value from the function that has been asked to implement.

#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char str[]) {
    // Write your code here
    int l = strlen(str);
    int i=0,j=l-1;
    while(i<=j){
        if(str[i++] != str[j--]){
            return false;
        }
        i++,j--;
    }
    return true;
}

int main(){
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
