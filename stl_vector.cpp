#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    cout<<"size of the vector is: "<<v.size()<<endl;
    cout<<"capacity of the vector is: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size of the vector is: "<<v.size()<<endl;
    cout<<"capacity of the vector is: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size of the vector is: "<<v.size()<<endl;
    cout<<"capacity of the vector is: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size of the vector is: "<<v.size()<<endl;
    cout<<"capacity of the vector is: "<<v.capacity()<<endl;

    v.pop_back();
    cout<<"size of the vector is: "<<v.size()<<endl;
    cout<<"capacity of the vector is: "<<v.capacity()<<endl;

     vector<int>v1(v);
    for(auto i:v1){
        cout<<i<<" "<<endl;
    }

    v.clear();
    cout<<"size of the vector is: "<<v.size()<<endl;
    cout<<"capacity of the vector is: "<<v.capacity()<<endl;

   
     
}