#include<iostream>
using namespace std;
bool isSafe(int **arr,int x,int y,int n)
{
    if(x<n && y<n && arr[x][y]==1)
        return true;
    else
        return false;
}
    
bool ratinMaze(int **arr,int x,int y,int n,int **arrAns)
{
    if(x==n-1 && y==n-1)
    {
        arrAns[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n))
    {
        arrAns[x][y]=1;
        if(ratinMaze(arr,x,y+1,n,arrAns))
            return true;
        if(ratinMaze(arr,x+1,y,n,arrAns))
            return true;
        arrAns[x][y]=0;
        return false;
    }
    return false;
}
    
int main()
{
    int n;
    cin>>n;
    int **arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>*(*(arr+i)+j);
    int **arrAns = new int*[n];
    for(int i=0;i<n;i++)
    {
        arrAns[i] = new int[n];
        for(int j=0;j<n;j++)
            arrAns[i][j]=0;
    }
    cout<<endl;
    if(ratinMaze(arr,0,0,n,arrAns))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<arrAns[i][j]<<" ";
            cout<<endl;
        }    
    }
    return 0;
}