#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int t, n;
    // cin >> t;
    t=1;
    while (t--)
    {
        // cin >> n;
        n=8;
        string Str;
        // cin >> Str;
        Str="94241234";
        map<ll, ll> map1;
        map<ll, ll> map2;
        // for (int i = 0; i < n; i++)
        // {
        //     map1[i]=i;
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cout<< map1[i]<<endl;
        // }
        // for (auto i = map1.begin(); i != map1.end(); i++)
        // {
        //     cout<<"i.first : "<<i->first<<" i->second : "<<i->second<<endl;
        // }
        // cout<<endl;
        // cout<<map1[-1]<<endl;
        for (int i = 0; i < n; i++)
        {
            map1[i - (Str[i] - 48)]++;
            cout<<"i : "<<i<<" (Str[i] - 48) : "<<(Str[i] - 48);
            cout<<" i - (Str[i] - 48) : "<<i - (Str[i] - 48)<<endl;
            // map2[i + (Str[i] - 48)]++;
        }
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            map2[i + (Str[i] - 48)]++;
            cout<<"i : "<<i<<" (Str[i] - 48) : "<<(Str[i] - 48);
            cout<<" i + (Str[i] - 48) : "<<i + (Str[i] - 48)<<endl;
        }
        ll ans = 0;
        for (auto i = map1.begin(); i != map1.end(); i++)
        {
            cout<<"i.first : "<<i->first<<" i->second : "<<i->second<<endl;
        }
        cout<<endl;
        for (auto i = map2.begin(); i != map2.end(); i++)
        {
            cout<<"i.first : "<<i->first<<" i->second : "<<i->second<<endl;
        }
        for (auto i = map1.begin(); i != map1.end(); i++)
        {
            ans += ((i->second) * (i->second - 1)) / 2;
        }
        for (auto i = map2.begin(); i != map2.end(); i++)
        {
            ans += ((i->second) * (i->second - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}