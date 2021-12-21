// Frequency of array elements.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={10,5,20,5,10,5};
//     int n=sizeof(arr)/sizeof(int);
//     unordered_map<int,int>mp;
//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }
//     for(auto x:mp){
//         cout<<x.first<<" "<<x.second<<endl;
//     }
//     // It will print in any order
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,5,20,5,10,5};
    int n=sizeof(arr)/sizeof(int);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[arr[i]]!=-1){
             cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
        }
        mp[arr[i]]=-1;
    }
}