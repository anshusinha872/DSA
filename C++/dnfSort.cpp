#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnfSort(int arr[],int n)
{
    int low =0;
    int high = n-1;
    int mid=0;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr,mid,low);
            mid++;
            low++;
        }
        if(arr[mid]==1)
        {
            mid++;
        }
        if(arr[mid]==2)
        {
            swap(arr,mid,high);
            high--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    dnfSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}