#include<iostream>
using namespace std;
void towHanoi(int n,char src, char helper, char dest)
{
    if(n==0)
        return;
    towHanoi(n-1,src,dest,helper);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    towHanoi(n-1,helper,src,dest);
}
int main()
{
    int n;
    cin>>n;
    towHanoi(n,'A','B','C');
    return 0;
}