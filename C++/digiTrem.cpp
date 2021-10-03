#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int digiTrem(ll n,ll d){
    string str = to_string(n);
    int first_occ = 0;
    if(d==n)
        return 1;
    bool flag = false;
    for(int i=0;i<str.length();i++){
        int temp = str[i]-48;
        if(temp==d)
            flag=true;
    }
    if(!flag)
        return 0;
    if(d==0){
        for(int i=0;i<str.length();i++){
            if(str[i]=='0'){
                str[i]='1';
                first_occ=i;
                break;
            }
        }
        for(int i=first_occ+1;i<str.length();i++){
            str[i]='1';
        }

    }
    else if(d==9){
        if(str[0]=='9'){
            for(int i=0;i<str.length();i++){
                str[i]='0';
            }
            str = "1"+str;
        }
        else{
            for(int i=0;i<str.length();i++){
                if(str[i]=='9'){
                    first_occ=i;
                    break;
                }
            }
            if(str[first_occ-1]<='7'){
                str[first_occ-1]++;
                for(int i=first_occ;i<str.length();i++){
                    str[i]='0';
                }
            }
            else{
                int second_occ =first_occ;
                while(second_occ>=1 && str[second_occ-1]=='8'){
                    if(str[second_occ-1]=='8')
                            second_occ--;
                }
                if(second_occ==0){
                    for(int i=0;i<str.length();i++){
                        str[i]='0';
                    }
                    str="1"+str;
                }
                else{
                    str[second_occ-1]++;
                    for(int i=second_occ;i<str.length();i++){
                        str[i]='0';
                    }
                }
            }

        }
    }
    else{
        
        for(int i=0;i<str.length();i++){
            int temp=str[i]-48;
            if(temp==d){
                first_occ=i;
                str[i]++;
                break;
            }
        }
        for(int i=first_occ+1;i<str.length();i++){
            str[i]='0';
        }
    }
    int ans = stoi(str);
    return ans-n;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, d;
        cin >> n >> d;
        cout << digiTrem(n, d) << endl;
    }
    return 0;
}