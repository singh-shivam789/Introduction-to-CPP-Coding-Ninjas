// Print the following pattern
// Pattern for N = 4
//     *
//    ***
//   *****
//  *******
// *********

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int s=1;
        while(s<=n-i)
        {
            cout<<" ";
            s++;
        }
        int star = 1;
        while(star<=(2*i)-1)
        {
            cout<<"*";
            star+=1;
        }
        cout<<endl;
    }
}
