// Highest Occuring Character
// For a given a string(str), find and return the highest occurring character.

// Example:
// Input String: "abcdeapapqarr"
// Expected Output: 'a'

// Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
// If there are two characters in the input string with the same frequency, 
// return the character which comes first.

// Consider:
// Assume all the characters in the given string to be in lowercase always.

// Input Format:
// The first and only line of input contains a string without any leading and trailing spaces.

// Output Format:
// The only line of output prints the updated string. 

// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// Time Limit: 1 second

// Sample Input 1:
// abdefgbabfba

// Sample Output 1:
// b

// Sample Input 2:
// xy

// Sample Output 2:
// x

#include<bits/stdc++.h>
using namespace std;

char highestOccurringChar(char input[]) {
    int freq[256] = {0};
    int sav;
    for(int i=0; input[i]!='\0'; i++){
        sav = (int)input[i];
        freq[sav] += 1;
    }
    int l = INT_MIN, lpos = -1;
    for(int i=0; i<256; i++){
        if(freq[i] > l){
            l = freq[i];
            lpos = i;
        }
        else if(freq[i] == l){
            continue;
        }
    }

    return (char)lpos;
}
int main(){
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);   
}
