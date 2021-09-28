#include<iostream>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;
int main()
{
    cout<<"enter a string"<<endl;
    string s;
    getline(cin,s);
    int arr[26];
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }
    int MAX=INT_MIN;
    for(int i=0;i<=s.length();i++)
    {
        arr[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        MAX=max(MAX,arr[i]);
    }
    cout<<MAX<<endl;
    return 0;

}