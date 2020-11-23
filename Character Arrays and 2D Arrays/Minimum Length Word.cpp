// Minimum Length Word
// Given a string S (that can contain multiple words), you need to find the word which has minimum length.

// Note : If multiple words are of same length, then answer will be first minimum length word in the string.
// Words are seperated by single space only.

// Input Format :
// String S

// Output Format :
// Minimum length word

// Constraints :
// 1 <= Length of String S <= 10^5

// Sample Input 1 :
// this is test string

// Sample Output 1 :
// is

// Sample Input 2 :
// abc de ghihjk a uvw h j

// Sample Output 2 :
// a

#include<bits/stdc++.h>
using namespace std;
void fillArray(char input[], char output[], int s, int e, int l){
    for(int i=0; i<l; i++){
        output[i] = input[s++];
    }
    output[l] = '\0';
    return;
}
void minLengthWord(char input[], char output[]){
	int start=0, end=0, nl=0, pl = INT_MAX;
	for(int i=0; i<=strlen(input); i++){
        if(input[i] == ' ' || input[i] == '\0'){
            end = i - 1;
            nl = end - start + 1;
            if(nl < pl){
                fillArray(input, output, start, end, nl);
            	pl = nl;
            }
            start = i + 1;
        }
    }
    return;
}

int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}



