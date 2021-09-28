#include<iostream>
#include<climits>
using namespace std;
int hurdleRace(int arr[],int n,int k)
{
    int maxArr=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxArr=max(maxArr,arr[i]);
    }
    if(maxArr<=k)
    {
        return 0;
    }
    else
    {
        return (maxArr-k);
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<hurdleRace(arr,n,k);
    return 0;
}