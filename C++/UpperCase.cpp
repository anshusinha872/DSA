#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    cout<<"Enter the string"<<endl;
    string s1;
    getline(cin,s1);
    // for(int i=0;i<s1.length();i++)
    // {
    
    //     if(s1[i]<=122&&s1[i]>=97)
    //     {
    //         s1[i]=s1[i]-32;
    //     }
    // }
    //using transform function
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    //printing uppercase
    cout<<s1<<endl;
    return 0;

}