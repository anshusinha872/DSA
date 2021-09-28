#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"The subarray are: "<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j = i; j < n; j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout << arr[k] << " ";
                sum+=arr[k];
            }
            cout<<" sum: "<<sum;
            sum=0;
            cout << '\n';
        }
    }
    return 0;    
}