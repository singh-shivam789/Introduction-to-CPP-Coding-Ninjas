// Write a program to print first x terms of 
//the series 3N + 2 which are not multiples of 4.
#include<iostream>
using namespace std;
int main(){
    int n,x,count=0;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        for(int n=1; n<=1000; n++)
        {
            int ap = (3*n + 2);
            if(count<x){
            if(ap%4!=0)
            {
                cout<<ap<<" ";
                count++;
            }
        }
    }
}
}
