// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 1
// 11
// 111
// 1111
#include<iostream>
using namespace std;

void printPattern(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<"1";
    }
    cout<<endl;
  }
}

int main(){
    int n;
    cin>>n;
    printPattern(n);
}
