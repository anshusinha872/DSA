#include<bits/stdc++.h>
using namespace std;
class Myhash{
    public:
        int bucket;
        list<int> *table;
    Myhash(int b){
        bucket=b;
        table=new list<int> [b];
        
    }
    void insert(int key){
        int i=key%bucket;
        table[i].push_back(key);
    }
    void remove(int key){
        int i =key%bucket;
        table[i].remove(key);
    }
    bool search(int key){
        int i = key%bucket;
        for(auto x : table[i])
            if(x==key)
                return true;
        return false;
    }
};
int main(){
    Myhash obj(5);
    obj.insert(10);
    obj.insert(20);
    obj.insert(30);
    obj.insert(40);
    obj.insert(50);
    cout<<obj.search(20)<<"\n";
    cout<<obj.search(30)<<"\n";
    obj.remove(20);
    cout<<obj.search(20)<<"\n";
    cout<<obj.search(30)<<"\n";
    return 0;
}