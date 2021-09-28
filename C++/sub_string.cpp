#include<iostream>
using namespace std;
void sub_string(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    sub_string(ros,ans);
    sub_string(ros,ch+ans);


}
int main()
{
    string s;
    cin>>s;
    sub_string(s,"");
    return 0;
}