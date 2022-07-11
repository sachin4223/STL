#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<<"Is array a is empty: "<<a.empty()<<endl;
    cout<<"first element and last element of the array"<<a.front()<<" "<<a.back();
}