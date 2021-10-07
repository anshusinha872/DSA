#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
int digitRemove(ll n1,ll d)
{
    string n = to_string(n1);
    int f = 0;
    string b = "";
    int x = n.length();
    if (d == 9)
    {
        f = 1;
        // if first digit of the string is 9
        if (n[0] == '9')
        {
            stringstream sti(n);
            int num = 0;
            sti >> num;
            int count = 0;
            int nm = num;
            while (nm != 0)
            {
                nm = nm / 10;
                count++;
            }
            if (count == x)
            {
                return  (pow(10, count) - num);
            }
        }
        //first digit is other than 9
        else
        {
            f = 1;
            for (int i = 0; i < x; i++)
            {
                int t = 0, index = 0;
                int temp = 0;
                if (n[i] == '9')
                {
                    for (int j = i - 1; j >= 0; j--)
                    {
                        int comp = n[j] - 48;
                        if (comp <= 7) //the digits before 9 is less than 8
                        {
                            comp++;
                            t = 1;
                            temp = comp;
                            index = j;
                            break;
                        }
                    }
                    if (t == 0) //the digit before 9 is 8
                    {
                        b += "1";
                        for (int k = 0; k < x; k++)
                            b += "0";
                        break;
                    }
                    else //computation for the digits before 9 is less than 8
                    {
                        for (int z = 0; z < index; z++)
                            b += n[z];
                        char ch = temp + '0';
                        b += ch;
                        int l = i - index - 1;
                        while (l--) //if incase there's 8 between 9 and previous(non-8) digits
                            b += "0";
                        for (int j = i; j < x; j++)
                            b += "0";
                        break;
                    }
                }
            }
        }
    }
    else if (d == 0)
    {
        for (int i = 0; i < x; i++)
        {
            int nii = n[i] - 48;
            if (nii == d)
            {
                f = 1;
                for (int k = 0; k < i; k++)
                {
                    b += n[k];
                }
                int y = nii + 1;
                char s = y + '0';
                b += s;
                for (int j = (i + 1); j < x; j++)
                    b += "1";
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            int nii = n[i] -48;
            if (nii == d)
            {
                f = 1;
                    for (int k = 0; k < i; k++)
                        b += n[k];
                    int y = nii  + 1;
                    char s = y + '0';
                    b += s;
                for (int j = (i + 1); j < x; j++)
                    b += "0";
                break;
            }
        }
    }
    if (f == 0)
    {
       
        return 0;
    }
    int ans = stoi(b);
   return (ans - n1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        cout<<digitRemove(n, d)<<endl;
    }
    return 0;
}