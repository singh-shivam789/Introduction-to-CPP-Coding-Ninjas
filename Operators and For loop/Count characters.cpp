// Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces 
//(single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
// That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
// Print count of characters, count of digits and count of white spaces respectively (separated by space).
#include<iostream>
using namespace std;
int main()
{
    char c;
    int countchar=0,countnum=0,countws=0;
    c=cin.get();
    while(c!='$')
    {
        
        if(c>=97&&c<=123)
        {
            countchar++;
        }
        if(c>=48&&c<=57)
        {
            countnum++;
        }
        if(c=='\n'||c=='\t'||c==' ')
        {
            countws++;
        }
		c=cin.get();
    }
  cout<<countchar<<" "<<countnum<<" "<<countws;
}
