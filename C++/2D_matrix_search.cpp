//row are sorted in increasing order from left to right
//column are sorted in increasing order form top to bottom
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the number"<<endl;
    int var1;
    cin>>var1;
    int i=0,j=y-1;
    bool flag;
    while(i<=x-1&&j<=y-1){
        if(var1>arr[i][j]){
            i++;
        }
        else if(var1<arr[i][j])
        {
            j--;
        }
        else if(var1==arr[i][j])
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag){
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}