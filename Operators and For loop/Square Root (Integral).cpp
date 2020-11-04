
// Given a number N, find its square root. You need to find and print only the integral part of square root of N.
// For eg. if number given is 18, answer is 4.
#include<iostream>
using namespace std;

int printSqRoot(int n){
    for(int i=1; i<=n/2; i++){
    	if(i*i == n){
            return i;
        }
        else if(i*i > n){
            return i-1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    cout<<printSqRoot(n);
}
