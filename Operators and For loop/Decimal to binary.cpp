// #include<iostream>
// Given a decimal number (integer N), convert it into binary and print.
// The binary number should be in the form of an integer.
// Note : The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.
#include<iostream>
#include<cmath>
using namespace std;
long long int calpower(long long int i)
{
    long long int ans=1;
    for(int j=0; j<i; j++)
{
    ans *= 10;
}
return ans;
}
int main()
{
    long long int num,result=0;
    cin>>num;
    for(int i=0,j; num>0; i++)
    {
            j = num%2;
            num = num/2;
            result = result + j*calpower(i);
    }
    cout<<result;
}
