// Nth term of fibonacci series F(n) is calculated using following formula -
//    F(n) = F(n-1) + F(n-2), 
//    Where, F(1) = F(2) = 1
// Provided N you have to find out the Nth Fibonacci Number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int count = 0;
    int a=0,b=1,c=0;
    while(count!=n){
        c = a + b;
        a = b;
        b = c;
        count++;
    }
    cout<<a<<endl;
}
