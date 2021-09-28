#include<iostream>
using namespace std;
void Subseq(string s , string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);
    Subseq(ros,ans);
    Subseq(ros,ch+ans);
    Subseq(ros,ans+to_string(code));
    
}
int main()
{
    string s;
    cin>>s;
    Subseq(s,"");
    return 0;
}