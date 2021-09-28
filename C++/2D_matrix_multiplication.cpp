#include<iostream>
using namespace std;
int main(){
    int row1,col1;
    cout<<"Enter the row and column of 1st matrix"<<endl;
    cin>>row1>>col1;
    int arr1[row1][col1];
    cout<<"Enter the element of 1st matrix"<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }
    //2nd array
    int row2,col2;
    cout<<"Enter the row and column of the 2nd matrix"<<endl;
    cin>>row2>>col2;
    if(col1==row2){
        int arr2[row2][col2];
        cout<<"Enter the element of the 2nd matrix"<<endl;
        for(int i=0;i<row2;i++){
            for(int j=0;j<col2;j++){
                cin>>arr2[i][j];
            }
        }
        //multi
        int arr3[row1][col2];
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                int sum=0;
                for(int k=0;k<col1;k++){
                    sum+=arr1[i][k]*arr2[k][j];
                }
                arr3[i][j]=sum;
                sum=0;
            }
        }
    cout<<"The final matrix is "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}