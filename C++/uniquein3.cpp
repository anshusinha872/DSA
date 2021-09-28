#include<bits/stdc++.h>
using namespace std;
int getBit(int num,int pos)
{
    return ((num&(1<<pos))!=0);
}
int SetBit(int num,int pos)
{
    return (num | (1<<pos));
}
int unique(int arr[],int n)
{
    int result=0;
    int bits[32];
    for(int i=0;i<32;i++)
        bits[i]=0;
    for(int i=0;i<32;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getBit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum%3!=0)
        {
            result = SetBit(result,i);
        }
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"the unique number in the array is "<<unique(arr,n);
    return 0;
}