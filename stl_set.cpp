#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(6);
    s.insert(9);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<" given element is present in set or not: "<<s.count(5)<<endl;

    set<int>:: iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;


    return 0;
}