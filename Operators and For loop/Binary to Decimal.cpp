// Given a binary number as an integer N, convert it into decimal and print.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int res=0,num,j;
cin>>num;
for(int i=0; num!=0; i++)
{
    j = num%10;
    res += j * pow(2,i);
    num = num / 10;
}
cout<<res;
}
