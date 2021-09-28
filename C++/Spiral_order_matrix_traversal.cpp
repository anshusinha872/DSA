#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the traversal array is : "<<endl;
    int row_start=0,row_end=x-1,col_start=0,col_end=y-1;
    while(row_start<=row_end&&col_start<=col_end){
        //row_start
        for(int col=col_start;col<=col_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        //col end
        for(int row=row_start;row<=row_end;row++){
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;
        //row end
        for(int col=col_end;col>=col_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        //col_start
        for(int row=row_end;row>=row_start;row--){
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
    }
    return 0;
}