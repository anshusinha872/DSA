#include<iostream>
int viralAdvertising(int n)
{
    int total_person=0,total_likes=0,total_shared=5,final=0;;
    for(int i=1;i<=n;i++)
    {
        total_likes=(total_shared/2);
        total_shared = (total_shared/2)*3;
        final=final+total_likes;
    }
    return final;
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<viralAdvertising(n);
    return 0;
}