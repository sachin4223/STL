#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;
    s.push("sachin");
    s.push("kumar");
    s.push("singh");

    cout<<"Top element of the stack: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element of the stack: "<<s.top()<<endl;

    //treverse in the stack
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }


    return 0;
}