// Count distinct element in every window

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,20,20,10,30,40,10};
    int k=4;
    int n=sizeof(arr)/sizeof(int);
    unordered_map<int,int>mp;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    cout<<mp.size()<<" ";
    for(int i=k;i<n;i++){
        mp[arr[i-k]]--;
        if(mp[arr[i-k]]==0){
            mp.erase(arr[i-k]);
        }
        mp[arr[i]]++;
        cout<<mp.size()<<" ";
    }

}
