#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==0)
        return 1;
    else
        return num*fact(num-1);
}
int main()
{
    int n,r;
    cin>>n>>r;
    int result=fact(n)/(fact(n-r)*fact(r));
    cout<<"The final result is "<<result<<endl;
    return 0;
}