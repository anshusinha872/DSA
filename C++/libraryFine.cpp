#include<iostream>
using namespace std;
int libraryFine(int d1,int m1,int y1,int d2,int m2,int y2){
    if(y1<y2)
        return 0;
    if(y1==y2){
            if(m1<m2)
                return 0;
            else if(m1==m2)
            {
                if(d1==d2)
                    return 0;
                else if(d1<d2)
                    return 0;
                else
                    return (abs(d1-d2)*15);
            }
            else
                return abs(m1-m2)*500;
    }
    else
        return 10000;
}
int main(){
    int d1,m1,y1,d2,m2,y2;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    cout<<libraryFine(d1,m1,y1,d2,m2,y2);
    return 0;
}