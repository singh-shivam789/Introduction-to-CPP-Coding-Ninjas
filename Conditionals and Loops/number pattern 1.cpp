// Aim -> Print the following pattern
// Pattern for N = 4
// 1
// 23
// 345
// 4567

#include<iostream>
using namespace std;

void printPattern(int n){
  for(int i=1; i<=n; i++){
    int val = i;
    for(int j=1; j<=i; j++){
      cout<<val++<<" ";
    }
    cout<<endl;
  }
  return;
}

int main(){
  int n;
  cin>>n;
  printPattern(n);
}
