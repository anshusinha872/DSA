#include<iostream>
using namespace std;
class base_class1{
    private:
        int x;
    protected:
        int y;
    public:
        base_class1(){
            cout<<"Base class 1 constructor "<<endl;
        }
        void funcA(int i){
            cout<<"Base class 1 fnction "<<endl;
            x=i;
            y=i;
        }
        void Show_data(){
            cout<<"x "<<x<<endl;
            cout<<"y "<<y<<endl;
        }
};
class base_class2{
    public:
        base_class2(){
            cout<<"Base class 2 constructor "<<endl;
        }
        void funcB(){
            cout<<"Base class 2 function "<<endl;
        }
};
class derived:public base_class1,public base_class2{
    public:
        derived(){
            cout<<"derived class constructor"<<endl;
        }
        void printY(){
            cout<<y<<endl;
        }
};
int main(){
    derived obj;
    obj.funcA(10);
    obj.printY();
    // cout<<" x "<<obj.y<<endl;
    // obj.Show_data();
    return 0;
}