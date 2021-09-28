//the maximum sum of subarray using kadan's algorith
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int current_sum=0;
    int maxSum=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        current_sum+=arr[i];
        if(current_sum<0)
        {
            current_sum=0;
        }
        maxSum=max(maxSum,current_sum);
    }
    cout<<"The max sum is "<<maxSum<<endl;
    return 0;
}