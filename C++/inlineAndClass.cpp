#include<iostream>
using namespace std;
class operation{
        int a,b,add,sub,mul;
        float div;
    public:
        void getData();
        void sum();
        void diff();
        void product();
        void divfun();
};
inline void operation::getData(){
    cout<<"Enter two number "<<endl;
    cin>>a>>b;
}
inline void operation::sum(){
    cout<<"sum of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
}
inline void operation::diff(){
    cout<<"diff is "<<abs(a-b)<<endl;
}
inline void operation::divfun(){
    cout<<"div of "<<a<<" and "<<b<<" is : "<<a/b<<endl;
}
inline void operation::product(){
    cout<<"product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
int main(){
    operation obj1;
    obj1.getData();
    obj1.diff();
    obj1.divfun();
    obj1.product();
    obj1.sum();
    return 0;
}