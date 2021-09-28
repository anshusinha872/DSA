#include<iostream>
#include<climits>
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
        int day=0;
        for(int j=0;j<n;j++)
        {
            if(j==0&&arr[j]>arr[j+1])
            {
                day++;
            }
            else if(j==n-1)
            {
                int max=INT_MIN;
                for(int k=0;k<n-2;k++)
                {
                    max=max>arr[k]?max:arr[k];
                }
                if(arr[j]>max)
                {
                    day++;
                }
            }
            else{
                int max=INT_MIN;
                for(int k=0;k<j;k++)
                {
                    max=max>arr[k]?max:arr[k];
                }
                if(arr[j]>max&&arr[j]>arr[j+1])
                {
                    day++;
                }
            }
        }
        cout<<day<<endl;
    }
    return 0;
}