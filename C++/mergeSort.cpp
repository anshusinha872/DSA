#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
    int n1= m-l+1;
    int n2=r-m;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=arr[m+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
            i++;
            k++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
            k++;
            j++;
    }
}
void mergeSort(int arr[],int l,int r)
{
    int m=(l+r)/2;
    if(l<r)
    {
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
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
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}