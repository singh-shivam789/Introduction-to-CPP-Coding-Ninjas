// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 1
// 11
// 202
// 3003
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<1<<endl;
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j>1&&j<i)
            {
                cout<<"0";
            }
            else
            {
                cout<<i-1;
            }
        }
        cout<<endl;
    }
}
