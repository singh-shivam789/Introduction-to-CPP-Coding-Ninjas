// Aim->Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
#include<iostream>
using namespace std;

void printEvenOdd(int n){
  int sumOdd=0, sumEven=0;
  while(n>0){
    int sav = n%10;
    if(sav%2 == 0){
      sumEven += sav;
    }
    else{
      sumOdd += sav;
    }
    n = n / 10;
  }
  cout<<sumEven<<" "<<sumOdd;
  return;
}

int main(){
  int n;
  cin>>n;
  printEvenOdd(n);
}
