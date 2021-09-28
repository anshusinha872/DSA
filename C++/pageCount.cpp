#include<iostream>
using namespace std;
int pageCount(int n,int p)
{
    int turn =0;
    for(int i=1;i<=n;)
    {
        if(i==1 && ((i+1)<=p))
        {
            turn++;
            i++;
        }
        if((i+2)<=p)
        {
            turn++;
            i+=2;
        }
        else
        {
            break;
        }
    }
    int turnFromLast =0;
    int LastPage=0;
    if(n%2==0)
    {
        LastPage=1;
    }
    else
    {
        LastPage=2;
    }
    for(int i=n;i>=1;)
    {
            if(LastPage==2 && i==n)
            {
                if((i-2)>=p)
                {
                    turnFromLast++;
                    i=i-2;
                }
                else{
                    break;
                }
                
            }
            else if(LastPage == 1 && i==n)
            {
                if((i-1)>=p)
                {
                    turnFromLast++;
                    i=i-1;
                }
                else{
                    break;
                }
            }
            else
            {
                if((i-2)>=p)
                {
                    turnFromLast++;
                    i=i-2;
                }
                else{
                    break;
                }
            }
    }
    return min(turn,turnFromLast);
}
int main()
{
    int p,n;
    cin>>n>>p;
    cout<<pageCount(n,p);
    return 0;
}