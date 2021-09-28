#include<iostream>
using namespace std;
int designerPdfViewer(int arr[],string str)
{
    int maxHeight=0;
    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        maxHeight=max(maxHeight,arr[ch-97]);
    }
    return (maxHeight*str.length());
}
int main()
{
    int arr[26];
    for(int i=0;i<26;i++)
        cin>>arr[i];
    string str;
    cin>>str;
    cout<<designerPdfViewer(arr,str);
    return 0;
}