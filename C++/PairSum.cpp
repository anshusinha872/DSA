#include<iostream>
#include<climits>
using namespace std;
bool check(int arr[],int k,int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
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
    cout<<"Enter the number "<<endl;
    int k=0;
    cin>>k;
    if(check(arr,k,n)==true)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}