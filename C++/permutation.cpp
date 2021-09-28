#include<iostream>
using namespace std;
void permutations(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        string ros = s.substr(0,i)+s.substr(i+1);
        char ch = s[i];
        permutations(ros,ans+ch);

    }
}
int main()
{
    string s;
    cin>>s;
    permutations(s,"");
    return 0;
}