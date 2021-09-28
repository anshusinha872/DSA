#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int x)
{
    bool flag;
    for(int i=2;i<sqrt(x);i++)
    {
        if(x%i==0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=x;i<=y;i++)
    {
        if(isprime(i))
            cout<<i<<endl;
    }
    return 0;

}