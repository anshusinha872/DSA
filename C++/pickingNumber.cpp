#include<iostream>
#include<climits>
using namespace std;
int pickingNumber(int arr[],int n)
{
    int result =0;
    int freq[101]={0};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=1;i<101;i++)
    {
        result= max(result,freq[i]+freq[i-1]);
    }
    for(int i=1;i<101;i++)
    {
        if(freq[i]+freq[i-1]==result)
        {
            for(int x=0;x<freq[i-1];x++)
            {
                cout<<i-1<<" ";
            }
            for(int y=0;y<freq[i];y++)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
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
    cout<<pickingNumber(arr,n);
    return 0;
}