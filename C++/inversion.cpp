//count the inversion in the given array 
//two element a[i] and a[j] form an inversion if a[i]>a[j] and i<j
//input 
// 3 5 6 9 1 2 7 8
//output
//10
#include<bits/stdc++.h>
using namespace std;
long long inversion_merge(int arr[],int l,int mid,int r)
{
    long long inv=0;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[i+l];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0;int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;k++;
        }else{
            arr[k]=b[j];
            j++;
            k++;
            inv+=n1-i;
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
    return inv;
}
long long inversion(int arr[],int l,int r)
{
    long long  inv=0;
    
    if(l<r)
    {
        int mid = (l+r)/2;
        inv+=inversion(arr,l,mid);
        inv+=inversion(arr,mid+1,r);
        inv+=inversion_merge(arr,l,mid,r);
    }
    return inv;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<inversion(arr,0,n-1);
    return 0;
}