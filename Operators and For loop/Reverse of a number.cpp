// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

#include<iostream>
using namespace std;
int main()
{
    int num,a;
    cin>>num;
    if(num==0){
        cout<<num;
        return 0;
    }
    while(num%10==0)
    {
        num=num/10;
    }
    while(num>0)
    {
        a = num%10;
        num = num/10;
        cout<<a;
    }
}

