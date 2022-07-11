#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);

    cout<<"Element is present or not: "<<binary_search(v.begin(),v.end(),5)<<endl;

    cout<<"lower bound of 4: "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"upper bound of 5: "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    //rotate any vector

    rotate(v.begin(),v.begin()+2,v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}