#include<iostream>
using namespace std;
bool isSafe(int **arr,int row,int col,int n)
{
    if(row<n && col<n && arr[row][col]==1)
        return true;
}
bool ratinMaze(int **arr,int row,int col,int n,int **ansArr)
{
    if(row==n-1 && col == n-1)
    {
        ansArr[row][col]=1;
        return true;
    }
    if(isSafe(arr,row,col,n))
    {
        ansArr[row][col]=1;
        if(ratinMaze(arr,row,col+1,n,ansArr))
            return true;
        if(ratinMaze(arr,row+1,col,n,ansArr))
            return true;
        ansArr[row][col]=0;
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
    {    for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int **ansArr= new int*[n];
    for(int i=0;i<n;i++)
    {
        ansArr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            ansArr[i][j]=0;
        }
    }
    cout<<endl;
    if(ratinMaze(arr,0,0,n,ansArr))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<ansArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
