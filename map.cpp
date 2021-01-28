#include<bits/stdc++.h>
using namespace std;
int main() {
    map<int, int> mp;
    int a,b;
   // mp.insert({1,2});
    for(int i=0; i<5; i++) {
        cin>>a>>b;
        mp.insert({a,b});
    }
    map<int, int>::iterator it = mp.find(8);
    if(it==mp.end()){
        cout<<"Value not found"<<endl;
    }
    else{
        cout<<"Data found"<<endl<<it->first<<"-->"<<it->second<<endl;
    }
    for(auto x : mp){
        cout<<x.first<<"-->"<<x.second<<endl;
    }
    return 0;
}