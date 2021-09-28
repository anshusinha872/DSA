#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    int arr1[n];
    for(int i=1;i<=n;i++)
    {
        arr1[arr[i]]=i;
    }
    int arr2[n];
    int record[n];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr1[i]==arr[j])
                record[i]=j;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<record[i]<<endl;
    return 0;
}