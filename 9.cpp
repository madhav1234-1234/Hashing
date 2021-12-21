// UNORDERED_MAP

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>mp;
    mp["gfg"]=20;
    mp["ide"]=30;
    mp.insert({"course",50});
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    if(mp.find("ide")!=mp.end()){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}