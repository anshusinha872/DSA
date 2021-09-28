#include<iostream>
using namespace std;
int utopianTree(int n)
{
    
    int height=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {    height*=2;}
        if(i%2==0)
        {    height++;}
    }
    return height;
}
int main()
{
    int n;
    cin>>n;
    int arrCycle[n];
    for(int i=0;i<n;i++)
    {
        cin>>arrCycle[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<utopianTree(arrCycle[i])<<endl;
    }
    return 0;
    
}