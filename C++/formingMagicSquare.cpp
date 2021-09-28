#include<iostream>
using namespace std;
void formingMagicSquare(int n)
{
    int Magicnum = n*((n*2-1)/2);
    int row=n,col=n;
    int sumRow_Start=0;
    int sumRow_end=0;
    int sumCol_start=0;
    int sumCol_end=0;
    int arr[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
    bool check[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            check[i][j]=false;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==0)
            {
                sumRow_Start+=arr[i][j];
            }
            if(i==row-1)
            {
                sumRow_end+=arr[i][j];
            }
            if(j==0)
            {
                sumCol_start+=arr[i][j];
            }
            if(j==col-1)
            {
                sumCol_end+=arr[i][j];
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(sumRow_Start<Magicnum)
            {
                if(check[i][j]=false)
                {
                    arr[i][j]=arr[i][j]+(Magicnum-sumRow_Start);
                    check[i][j]=true;
                }
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    formingMagicSquare(n);
    return 0;
}