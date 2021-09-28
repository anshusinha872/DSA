#include<iostream>
using namespace std;
class base_A{
    protected:
        int x_A;
    public:
        base_A(){
            cout<<"construcotor of first base class A"<<endl;
        }
        void funcA(){
            cout<<"function in base class A"<<endl;
        }
        void setX_A(int i){
            cout<<"Base class A set function "<<endl;
            x_A=i;
        }
        void PrintX_A(){
            cout<<"Base class A print function "<<x_A<<endl;

        }
};
class base_B : public base_A{
    protected:
        int x_B;
    public:
        base_B(){
            cout<<"constructor of second base class B"<<endl;
        }
        void funcB(){
            cout<<"function in base class B"<<endl;
        }
        void setX_B(int i){
            cout<<"Base class B set function "<<endl;
            x_B=i;
        }
        void PrintX_B(){
            cout<<"Base class B print function "<<x_A<<endl;
        }
};
class derived:public base_B{
    public:
        derived(){
            cout<<"constructor of derived base class "<<endl;
        }
        void func_derived(){
            cout<<"function in derived class"<<endl;
        }
        void setX_C(int i){
            cout<<"derived class C set function "<<endl;
            x_B=i;
        }
        void PrintX_C(){
            cout<<"Base class A print function "<<x_B<<endl;
        }
};
int main(){
    derived obj;
    obj.setX_A(10);
    obj.PrintX_B();
    obj.setX_B(100);
    obj.PrintX_C();
    return 0;
}