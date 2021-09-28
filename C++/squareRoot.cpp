#include<iostream>
using namespace std;
    int ans=-1;
int sqRootFloor(int low,int high,int x){
    // if (x == 0 || x == 1)
    //     return x;
    while(low<=high){
        int mid= (low+high)/2;
        int sqRoot = mid*mid;
        if(sqRoot==x)
            return mid;
        else if(sqRoot>x){
            return sqRootFloor(low,mid-1,x);
        }
        else{
            ans = mid;
            return sqRootFloor(mid+1,high,x);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int x=n;
    cout<<sqRootFloor(1,n,x);
    return 0;
}