#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n)
{
    int sum=0,maxSum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0) 
        {
            sum=0;
        }
        maxSum=max(sum,maxSum);
    }
    return maxSum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int wrapSum=0;
    int nonwrap=0;
    nonwrap=kadane(arr,n);
    int arrSum=0;
    for(int i=0;i<n;i++)
    {
        arrSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapSum=arrSum+kadane(arr,n);
    int maxSum=0;
    maxSum=max(wrapSum,nonwrap);
    cout<<maxSum<<endl;
    return 0;
}