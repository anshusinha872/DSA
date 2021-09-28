#include<iostream>
using namespace std;
int maxCount(int arr[],int n)
{
    int maxArr=0;
    int currentMax=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            currentMax++;
            maxArr= max(maxArr,currentMax);
        }
        else
        {
            currentMax = 0;
        }
    }
    return maxArr;
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
    cout<<maxCount(arr,n);
    return 0;
}