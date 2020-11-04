// Print the following pattern for the given N number of rows.
// Pattern for N = 3
//  A
//  BB
//  CCC
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=n;
        while(j>=i)
        {
            cout<<n-j+1;
            j-=1;
        }
        cout<<endl;
        i+=1;
    }
}
