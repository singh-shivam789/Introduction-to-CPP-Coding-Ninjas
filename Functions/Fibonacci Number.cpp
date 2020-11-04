//Aim -> Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
#include<iostream>
using namespace std;

bool checkFib(int n){
    int a=0,b=1,sum=0;
    while (a<=n+1) {
      if(a == n){
        return true;
      }
      else{
        sum = a + b;
        a = b;
        b = sum;
      }
    }
    return false;
}

int main() {
  /* code */
  int n;
  cin>>n;
  return checkFib(n);
}
