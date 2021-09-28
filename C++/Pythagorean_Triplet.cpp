#include<iostream>
#include<cmath>
using namespace std;
int max(int x,int y)
{
    if(x>=y)
        return x;
    else
        return y;
}
bool func(int x,int y,int z)
{
    int a=max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    int var1=a*a;
    int var2=b*b+c*c;
    if(var1==var2)
        return true;
    else
        return false;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(func(a,b,c)==true)
        cout<<"Pythogorean Triplet"<<endl;
    else
        cout<<"Not a pythgorean Triplet"<<endl;
    return 0;
}