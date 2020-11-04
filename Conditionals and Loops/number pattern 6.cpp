// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 1
// 11
// 121
// 1221

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    cout<<1<<endl;
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=i; j++){
            if(j>1&&j<i){    
                cout<<2;
            }
            else{
                cout<<1;
            }
            cout<<endl;
        }
    }
}
