// Print the following pattern for the given number of rows.
// Pattern for N = 4
//    1
//   212
//  32123
// 4321234
// Input format : N (Total no. of rows)
// Output format : Pattern in N lines

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int val = i;
        int val2 = 2;
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int k=1; k<=(2*i -1); k++){
            if(val>=1){
                cout<<val--;
            }
            else{
                cout<<val2++;
            }
        }
        cout<<endl;
    }
}
