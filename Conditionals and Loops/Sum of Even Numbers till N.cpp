// Aim-> Given a number N, print sum of all even numbers from 1 to N.
#include<iostream>
using namespace std;

void printSum(int n){
  int sum = 0;
  for(int i=1; i<=n; i++){
    if(i%2 == 0){
      sum += i;
    }
  }
  cout<<sum;
}

int main(){
  int n;
  cin>>n;
  printSum(n);
}
