#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the number"<<endl;
    cin>>k;
    int low=0;
    int high=n-1;
    for(int i=0;i<n;i++)
    {
        if(arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return 0;
}