#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int var, count = 0, rem = 0, sum = 0, y;
    cin >> var;
    int num = var;
    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    num = var;
    // cout<<num<<"num"<<endl;
    // cout<<count<<endl;
    for (int i = 0; i < count; i++)
    {
        rem = num % 10;
        sum = sum + rem * pow(16, i);
        num = num / 10;
    }
    cout << "The decimal equivalent is " << sum << endl;
    return 0;
}