#include<iostream>
using namespace std;
int main()
{
    int TestCase;
    cin>>TestCase;
    for(int i=0;i<TestCase;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int j=2;
        int pd=arr[1]-arr[0];
        int ans=2;
        int curr =2;
        while(j<n)
        {
            if(pd==arr[j]-arr[j-1])
            {
                curr++;
            }
            else
            {
                pd=arr[j]-arr[j-1];
                curr=2;
            }
            j++;
            ans=max(ans,curr);
        }
        cout<<ans;
    }
    return 0;
}