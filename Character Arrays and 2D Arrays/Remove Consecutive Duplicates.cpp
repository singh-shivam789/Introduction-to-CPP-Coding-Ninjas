// Remove Consecutive Duplicates
// For a given string(str), remove all the consecutive duplicate characters.

// Example:
// Input String: "aaaa"
// Expected Output: "a"

// Input String: "aabbbcc"
// Expected Output: "abc"

// Input Format:
// The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.

// Output Format:
// The only line of output prints the updated string.

#include<bits/stdc++.h>
using namespace std;
void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
	int i=0,j=0;
    while(input[i] != '\0'){
        if(input[i] == input[i+1]){
            i++;
        }
        else{
            swap(input[i], input[j]);
            i++, j++;
        }
    }
    input[j] = '\0';
    return;
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
