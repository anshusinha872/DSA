#include<bits/stdc++.h>
using namespace std;
int findDigits(int n)
{
    int var=n;
    int count=0;
    while(n)
    {
        int last_digit = n%10;
        if(last_digit==0){
            n=n/10;
            continue;
        }
            
        if((var%last_digit)==0)
            count++;
        n=n/10;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<findDigits(n)<<endl;
    }
    return 0;
}