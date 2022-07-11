#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;

    d.push_back(1);
    d.push_front(2);

    for(auto i:d){
        cout<<i<<endl;
    }
    // d.pop_back();
    // for(auto i:d){
    //     cout<<i<<endl;
    // }

    cout<<"Value present at second location: "<<d.at(1)<<endl;

    cout<<"fornt: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;

    deque<int> :: iterator it=d.begin();
    cout<<"print with help of iterator: "<<*it<<endl;

    d.erase(d.begin(),d.begin()+1);
    cout<<"Ater eraseing the element"<<endl;
    for(auto i:d){
        cout<<i<<endl;
    }

    return 0;
}