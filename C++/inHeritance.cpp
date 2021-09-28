#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
        int id_base;
};
class Derived : public Base
{
    public:
        int id_derived;
};
int main(){
    Derived obj1;
    obj1.id_base=10;
    obj1.id_derived=20;
    cout<<"Base class "<<obj1.id_base<<endl;
    cout<<"Derived class "<<obj1.id_derived<<endl;
    return 0;
}