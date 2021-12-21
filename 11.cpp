// Winner in an eection

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[]={"abc","xyz","xyz","pqr","pqr"};
    int n=sizeof(str)/sizeof(string);
    string ans;
    int maxf=0;
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        mp[str[i]]++;
    }
    for(auto x:mp){
        if(x.second>maxf){
            maxf=x.second;
            ans=x.first;
        }
        if(x.second==maxf && x.first<ans){
            ans=x.first;
        }
    }
    cout<<ans;
}