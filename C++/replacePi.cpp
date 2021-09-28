#include<iostream>
using  namespace std;
void replace(string s1)
{
    if(s1.length()==0)
        return ;
    if(s1[0]=='p' && s1[1]=='i')
    {
        cout<<"3.14";
        replace(s1.substr(2));
    }
    else
    {
        cout<<s1[0];
        replace(s1.substr(1));
    }
}
int main()
{
    string s = " pippxxppiixipi";
    replace(s);
    return 0;
}