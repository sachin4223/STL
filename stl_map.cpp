#include<iostream>
#include<map>
using namespace std;
//sgfvjd git fyygdj
int main(){

    map<int,string> m;

    m[1]="Sachin";
    m[2]="Kumar";
    m[13]="singh";

    m.insert({5,"sonu"});

     cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Is 13 present in the map or not: "<<m.count(13)<<endl;

    cout<<"After erase"<<endl;
    map<int,string>:: iterator itr=m.find(13);
   // m.erase(itr);
    //m.erase(13) //we can directly write
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    for(auto it=itr;it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }


   //return 0;
}