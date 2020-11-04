// Merge Two Sorted Arrays
// You have been given two sorted arrays/lists(ARR1 and ARR2) of sizes size1 and size2 respectively, merge them into a third array/list such that the third array is also sorted.

#include<bits/stdc++.h>
using namespace std;

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    //Write your code here
    int i=0,j=0,k=0;
    for(; i<size1&&j<size2; k++)
    {
        if(arr1[i] < arr2[j])
        {
            ans[k] = arr1[i++];
        }
        else if(arr1[i] >= arr2[j])
        {
            ans[k] = arr2[j++];
        }
    }
    while(i<size1)
    {
        ans[k++] = arr1[i++];
    }
    while(j<size2)
    {
        ans[k++] = arr2[j++];
    }
}
int main()
{
    int size1;
    cin >> size1;

    int *arr1 = new int[size1];

    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    int size2;
    cin >> size2;

    int *arr2 = new int[size2];

    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    int *ans = new int[size1 + size2];

    merge(arr1, size1, arr2, size2, ans);

    for (int i = 0; i < size1 + size2; i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
    delete[] arr1;
    delete[] arr2;
    delete[] ans;

    return 0;
}
