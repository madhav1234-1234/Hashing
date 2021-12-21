// Maximum type of elements.
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[]={1,1,2,1,3,1};
    int arr[]={1,1,1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(int);
    // int k=3;
    int k=4;
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int d=s.size();
    if(d>n/k){
        cout<<n/k;
    }else{
        cout<<d;
    }
}