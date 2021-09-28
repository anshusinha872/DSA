#include<iostream>
using namespace std;
int saveThePrisoner(int n,int m,int s)//
{
    return ((m%n)+s-1)%n==0?n:((m%n)+s-1)%n;
}
int main()
{
    int test_case;
    cin>>test_case;
    int arr[100];
    for(int i=0;i<test_case;i++)
    {
        long int n;//number of prisoner
        cin>>n;
        long int m; //number of sweets
        cin>>m;
        long int s;//the chair number to start passing the treats
        cin>>s;
        arr[i]=saveThePrisoner(n,m,s);
    }
    for(int i=0;i<test_case;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}