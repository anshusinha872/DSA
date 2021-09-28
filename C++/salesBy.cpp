#include<bits/stdc++.h>
using namespace std;
int sockMerchant(int arr[],int n)
{
    int pair[101]={0};
    for(int i=0;i<n;i++)
    {
        pair[arr[i]]++;
    }
    int totalPair=0;
    for(int i=0;i<101;i++)
    {
        pair[i]=pair[i]/2;
        totalPair+=pair[i];
    }
    return totalPair;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<sockMerchant(arr,n);
    return 0;
}