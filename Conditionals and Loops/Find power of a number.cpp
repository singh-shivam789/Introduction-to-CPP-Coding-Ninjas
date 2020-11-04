// Aim->Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
#include<iostream>
using namespace std;

int pow(int n, int p){
  if(p<=0){
    return 1;
  }
  else if(p==1){
    return n;
  }
  else{
    int ans = 1;
    for(int i=1; i<=p; i++){
        ans = n * ans;
    }
      return ans;
  }
}

int main(){
  int n,p;
  cin>>n>>p;
  cout<<pow(n,p);
}
