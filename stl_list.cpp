#include<iostream>
#include<list>//list stl ka implentation doubly linked list ka use kr ke hota hn
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    cout<<"size of list is: "<<l.size()<<endl;
    for(auto i:l){
        cout<<i<<endl;
    }
    l.erase(l.begin());
    cout<<"after erase the value from the list: "<<endl;
    cout<<"size of list is: "<<l.size()<<endl;
    for(auto i:l){
        cout<<i<<endl;
    }
    return 0;

}