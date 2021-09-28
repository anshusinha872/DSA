#include<iostream>
using namespace std;
void missingNumber(int arr[],int n)
{
    const int N = 1e6;
    int check[N];
    for(int i=0;i<N;i++)
    {   
        check[i]=false;
    }    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            check[arr[i]]=true;
        }
    }
    for(int i=1;i<=N;i++)
    {
        if(check[i]==false)
        {
            cout<<i<<endl;
            break;
        }    
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
    missingNumber(arr,n);
    return 0;
}   