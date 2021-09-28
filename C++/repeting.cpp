#include<iostream>
#include<climits>
using namespace std;
int min(int x,int y)
{
    int temp;
    temp=x<y?x:y;
    return temp;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    const int N=1e6+2;
    
    int index[N];
    for(int i=0;i<N;i++)
    {
        index[i]=-1;
    }
    int final[N];
    for(int i=0;i<N;i++)
    {
        final[i]=INT_MAX;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(index[arr[i]]==-1)
        {
            index[arr[i]]=i;
        }
        else
        {
            int temp;
            temp=min(index[arr[i]],arr[i]);
            final[arr[i]]=temp;
        }
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        min=min>final[i]?final[i]:min;
    }
    cout<<min<<endl;
    return 0;
}