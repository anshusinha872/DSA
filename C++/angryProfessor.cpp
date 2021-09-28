#include<iostream>
using namespace std;
string angryProfessor(int arr[],int n,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=0)
            count++;
    }
    if(count>=k)
        return "NO";
    else
        return "YES";
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        int threshold;
        cin>>threshold;
        int stu[num];
        for(int j=0;j<num;j++)
        {
            cin>>stu[j];
        }    
        cout<<angryProfessor(stu,num,threshold)<<endl;
    }
}