#include<iostream>
using namespace std;
class BOX1;
class BOX2{
    private:
        int a,b;
    public:
        friend void getData(BOX2 );
        void setData(int,int);
        friend void showData(BOX1,BOX2);
};
class BOX1{
    private:
        int x,y;
    public:
        friend void showData(BOX1,BOX2);
        BOX1(){
            x=100;
            y=200;
        }
};
void BOX2::setData(int x,int y){
    a=x;
    b=y;
}
void getData(BOX2 obj2){
    cout<<"friend function of single class "<<endl;
    cout<<"a : "<<obj2.a<<" b : "<<obj2.b<<endl;
}
void showData(BOX1 obj1,BOX2 obj2){
    cout<<"friend function of two class or multiple class "<<endl;
    cout<<"x : "<<obj1.x<<" y : "<<obj1.y<<endl;
    cout<<"a : "<<obj2.a<<" b : "<<obj2.b<<endl;
}
int main(){
    BOX1 obj1;
    BOX2 obj2;
    obj2.setData(10,20);
    getData(obj2);
    showData(obj1,obj2);
    return 0;
}