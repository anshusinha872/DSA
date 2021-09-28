#include<iostream>
using namespace std;
void fun(int n)
{
    int a = 0, b = 1, sum = 0;
    for(int i=1;i<=n;i++)
    {
        
        cout<<" "<<a<<" ";
        sum = a + b;
        a = b;
        b = sum;
    }
}
int main()
{
    int num;
    cin>>num;
    fun(num);
    return 0;
}