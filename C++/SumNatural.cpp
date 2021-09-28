#include<iostream>
using namespace std;
int fun(int n)
{
    int sum=0;
    // for(int i=1;i<=n;i++) using loop will increase our time complexity
    //     sum+=i;
    sum=n*(n+1)/2;
    return sum;
}
int main()
{
    int num;
    cin>>num;
    cout<<"The sum is "<<fun(num);
    return 0;
}