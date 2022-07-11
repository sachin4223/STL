#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue<string> s;

    s.push("sachin");
    s.push("kumar");
    s.push("singh");

    cout<<" first element of the queue: "<<s.front()<<endl;
    s.pop();
    cout<<" After poping, first element of the queue: "<<s.front()<<endl;
    
     while(!s.empty()){
        cout<<s.front()<<endl;
        s.pop();
    }


    return 0;
}
